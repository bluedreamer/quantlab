#include "CSVParser.h"
#include "Trade.h"

CSVParser::CSVParser(std::istream &in)
   :Parser(in)
{
}

std::shared_ptr<Message> CSVParser::GetMessage()
{
   return 0;
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
