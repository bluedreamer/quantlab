#include <catch2/catch.hpp>

#include "../Instrument.h"

TEST_CASE("Default ctor on instrument", "[instrument]")
{
   Instrument instrument;

   REQUIRE(instrument.GetTotalVolume() == 0);
   REQUIRE(instrument.GetLargestTradeGap() == 0);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(0.0));
}

TEST_CASE("Single trade on instrument", "[instrument]")
{
   Instrument instrument;

   instrument.Trade(51300130197, 286, 202);

   REQUIRE(instrument.GetTotalVolume() == 286);
   REQUIRE(instrument.GetLargestTradeGap() == 0);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(202.0));
}

TEST_CASE("Multiple trades on instrument", "[instrument]")
{
   Instrument instrument;

   instrument.Trade(51300130197, 286, 202);
   instrument.Trade(51304771475, 78, 199);
   instrument.Trade(51311533907, 19, 185);

   REQUIRE(instrument.GetTotalVolume() == 383);
   REQUIRE(instrument.GetLargestTradeGap() == 11'403'710);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(200.545691906005));
}
