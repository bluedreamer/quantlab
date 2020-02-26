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
   return {};
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

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
