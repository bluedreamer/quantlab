#include <iostream>
#include <fstream>

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../CSVParser.h"

TEST_CASE("Test parsing of first entry", "[parser]")
{
   std::ifstream in("test_data/input.csv");
   CSVParser parser(in);

   auto message = parser.GetMessage();
   REQUIRE(message);
   REQUIRE(message->GetTimestamp() == 51300037511);
   REQUIRE(message->GetSymbol() == std::string("gcg"));
   REQUIRE(message->GetVolume() == 49);
   REQUIRE(message->GetPrice() == 72);
}
