#include "Trade.h"
#include "Message.h"

Trade::Trade(TimeStamp timestamp, Symbol symbol, Volume volume, Price price)
   : Message(MsgType::Trade, timestamp, std::move(symbol))
   , volume_(volume)
   , price_(price)
{
}

Trade::~Trade()
{
}

Volume Trade::GetVolume() const
{
   return volume_;
}

Price Trade::GetPrice() const
{
   return price_;
}
// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
