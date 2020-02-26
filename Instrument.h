#pragma once

#include <string>

#include "public.h"

class Instrument
{
public:
   Instrument()                   = default;
   ~Instrument()                  = default;
   Instrument(const Instrument &) = default;
   Instrument(Instrument &&)      = default;
   Instrument &operator=(const Instrument &) = default;
   Instrument &operator=(Instrument &&) = default;

   void Trade(TimeStamp timestamp, Volume volume, Price price);

   uint64_t GetTotalVolume() const;
   uint64_t GetLargestTradeGap() const;
   double   GetAverageWeightedPrice() const;
   Price GetHigh() const;

private:
   std::string symbol_{};
   uint64_t    total_volume_{0};       ///< Accumulated volume of all trades
   TimeStamp    last_trade_time_{0};    ///< Timestamp of last trade, zero if none
   uint64_t    largest_trade_gap_{0};  ///< Largest time gap between trades
   uint64_t    total_value_traded_{0}; ///< Running total of Volume x Price for each trade
   // OHLC etc
   Price high_{0}; ///< High price for the session
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
