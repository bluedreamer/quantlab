#include <catch2/catch.hpp>

#include "../Instrument.h"

TEST_CASE("Default ctor on instrument", "[instrument]")
{
   Instrument instrument;

   REQUIRE(instrument.GetTotalVolume() == 234);
   REQUIRE(instrument.GetLargestTradeGap() == 234);
   REQUIRE(instrument.GetAverageWeightedPrice() == Approx(3.14));
}

