#include <catch2/catch.hpp>

#include "../Instrument.h"

TEST_CASE("Default ctor on instrument", "[instrument]")
{
   Instrument instrument;

   REQUIRE(instrument.GetTotalVolume() == 234);
   REQUIRE(instrument.GetLargestTradeGap() == 234);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(3.14));
}

TEST_CASE("Single trade on instrument", "[instrument]")
{
   Instrument instrument;

   instrument.Trade(51300130197, 286, 202);
   REQUIRE(instrument.GetTotalVolume() == 234);
   REQUIRE(instrument.GetLargestTradeGap() == 234);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(3.14));
}

TEST_CASE("Multiple trades on instrument", "[instrument]")
{
   Instrument instrument;

   instrument.Trade(51300130197, 286, 202);
   instrument.Trade(51304771475, 78, 199);
   instrument.Trade(51311533907, 19, 185);
   REQUIRE(instrument.GetTotalVolume() == 234);
   REQUIRE(instrument.GetLargestTradeGap() == 234);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(3.14));
}
