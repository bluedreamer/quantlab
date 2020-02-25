#include "Message.h"
#include "Trade.h"

Trade::Trade(Message::TimeStamp timestamp, Message::Symbol symbol, Message::Volume volume, Message::Price price)
   :Message(timestamp, std::move(symbol))
   , volume_(volume)
   , price_(price)
{
}

Trade::~Trade()
{
}

Message::Volume Trade::GetVolume() const
{
   return volume_;
}

Message::Price Trade::GetPrice() const
{
   return price_;
}
// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
