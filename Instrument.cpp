#include "Instrument.h"

void Instrument::Trade(uint64_t timestamp, uint64_t volume, uint64_t price)
{
   // Most common 2nd or more trades
   if(last_trade_time_ !=0 && largest_trade_gap_ != 0)
   {
      auto difference = timestamp - last_trade_time_;
      if(difference > largest_trade_gap_)
      {
         largest_trade_gap_ = difference;
      }
      last_trade_time_ = timestamp;
   }
   else if(last_trade_time_ !=0 && largest_trade_gap_ == 0)
   {
   }
   else // if(last_trade_time_ ==0 && largest_trade_gap_ ==0)
   {
   }
   total_volume_ += volume;
   total_value_traded_ += volume * price;
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
   return static_cast<double>(total_value_traded_) / static_cast<double>(total_volume_);
}


// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
