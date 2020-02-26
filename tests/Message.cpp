#include <fstream>
#include <iostream>

#include "../Trade.h"
#include <catch2/catch.hpp>

TEST_CASE("Message Types", "[types]")
{
   Trade trade(123, "abc", 1, 1);
   REQUIRE(trade.GetMsgType() == Message::MsgType::Trade);
}
