#include "Market.h"
#include "Parser.h"

Market::Market(std::unique_ptr<Parser> parser)
   :parser_(std::move(parser))
{
}

void Market::Process()
{
}

uint64_t Market::MessageCount() const
{
   return 0;
}

std::vector<std::string> Market::GetSymbols() const
{
   return {};
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
