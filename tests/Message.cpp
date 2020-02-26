#include <iostream>
#include <fstream>

#include <catch2/catch.hpp>
#include "../Trade.h"

TEST_CASE("Message Types", "[types]")
{
   Trade trade(123, "abc", 1, 1);
   REQUIRE(trade.GetMsgType() == Message::MsgType::Trade);
}
