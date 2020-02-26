#include "Market.h"
#include "Parser.h"
#include "Instrument.h"
#include "Message.h"

Market::Market(std::unique_ptr<Parser> parser)
   :parser_(std::move(parser))
{
}

void Market::Process()
{
   while(auto message = parser_->GetMessage())
   {
      processMessage(message);
   }
}

uint64_t Market::MessageCount() const
{
   return messages_processed_;
}

std::vector<std::string> Market::GetSymbols() const
{
   std::vector<std::string> rc;
   rc.reserve(data_.size());
   for(const auto &[symbol, instrument] : data_)
   {
      rc.push_back(symbol);
   }
   return rc;
}

void Market::processMessage(std::shared_ptr<Message> message)
{
   auto &instrument = findOrAdd(message->GetSymbol());
   auto type = message->GetMsgType();

   switch(type)
   {
      case Message::MsgType::Trade:
         processTrade(instrument, message);
      break;

      default:
         throw std::logic_error("Unhandled message type");
   }
   ++messages_processed_;
}

void Market::processTrade(Instrument &instrument, std::shared_ptr<Message> message)
{
   instrument.Trade(message->GetTimestamp(), message->GetVolume(), message->GetPrice());
}

Instrument &Market::findOrAdd(const std::string &symbol)
{
   return data_[symbol];
}

const Instrument &Market::FindInstrument(const std::string &symbol) const
{
   auto result = data_.find(symbol);
   if(result != data_.end())
   {
      return result->second;
   }
   throw std::logic_error("Cannot find symbol = " + symbol);
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
