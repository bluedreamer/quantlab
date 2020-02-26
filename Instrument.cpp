#include "Instrument.h"

void Instrument::Trade(TimeStamp timestamp, Volume volume, Price price)
{
   // Most common 2nd or more trades
   if(last_trade_time_ != 0)
   {
      auto difference = timestamp - last_trade_time_;
      if(difference > largest_trade_gap_)
      {
         largest_trade_gap_ = difference;
      }
   }
   last_trade_time_ = timestamp;
   total_volume_ += volume;
   total_value_traded_ += volume * price;

   if(price > high_)
   {
      high_ = price;
   }
}

uint64_t Instrument::GetTotalVolume() const
{
   return total_volume_;
}

uint64_t Instrument::GetLargestTradeGap() const
{
   return largest_trade_gap_;
}

double Instrument::GetAverageWeightedPrice() const
{
   if(total_volume_ == 0)
   {
      return 0.0;
   }
   return static_cast<double>(total_value_traded_) / static_cast<double>(total_volume_);
}

Price Instrument::GetHigh() const
{
   return high_;
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
