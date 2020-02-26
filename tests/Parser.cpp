#include <iostream>
#include <fstream>

#include <catch2/catch.hpp>
#include "../CSVParser.h"
#include "../Market.h"
#include "../Trade.h"

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

TEST_CASE("Test bad_trade1.csv", "[parser]")
{
   std::ifstream in("test_data/bad_trade1.csv");
   CSVParser parser(in);

   auto message = parser.GetMessage();
}

TEST_CASE("Test bad_trade2.csv", "[parser]")
{
   std::ifstream in("test_data/bad_trade2.csv");
   CSVParser parser(in);

   auto message = parser.GetMessage();
}

TEST_CASE("Test bad_trade3.csv", "[parser]")
{
   std::ifstream in("test_data/bad_trade3.csv");
   CSVParser parser(in);

   auto message = parser.GetMessage();
}

TEST_CASE("Test bad_trade4.csv", "[parser]")
{
   std::ifstream in("test_data/bad_trade4.csv");
   CSVParser parser(in);

   auto message = parser.GetMessage();
}

TEST_CASE("Test bad_trade5.csv", "[parser]")
{
   std::ifstream in("test_data/bad_trade5.csv");
   CSVParser parser(in);

   auto message = parser.GetMessage();
}
