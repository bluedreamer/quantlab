#pragma once

#include <string>

class Instrument
{
public:
   Instrument()                = default;
   ~Instrument()               = default;
   Instrument(const Instrument &) = default;
   Instrument(Instrument &&)      = default;
   Instrument &operator=(const Instrument &) = default;
   Instrument &operator=(Instrument &&) = default;

   void Trade(uint64_t timestamp, uint64_t volume, uint64_t price);

   uint64_t GetTotalVolume() const;
   uint64_t GetLargestTradeGap() const;
   double GetAverageWeightedPrice() const;
private:
   std::string symbol_{};
   uint64_t total_volume_{0}; ///< Accumulated volume of all trades
   uint64_t last_trade_time_{0}; ///< Timestamp of last trade, zero if none
   uint64_t largest_trade_gap_{0}; ///< Largest time gap between trades
   uint64_t total_value_traded_{0}; ///< Running total of Volume x Price for each trade
   // OHLC etc
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
