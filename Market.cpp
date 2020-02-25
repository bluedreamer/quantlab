#include "Market.h"
#include "Parser.h"

Market::Market(std::unique_ptr<Parser> parser)
   :parser_(std::move(parser))
{
}

void Market::Function()
{
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
