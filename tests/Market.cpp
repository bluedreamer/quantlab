#include <iostream>
#include <fstream>

#include <catch2/catch.hpp>
#include "../CSVParser.h"
#include "../Market.h"

TEST_CASE("Test parsing of input file", "[market]")
{
   std::ifstream in("test_data/input.csv");
   auto parser = std::make_unique<CSVParser>(in);

   Market market(std::move(parser));

   market.Process();

   REQUIRE(market.MessageCount() == 20391);
   REQUIRE(market.GetSymbols().size() == 343);

}
