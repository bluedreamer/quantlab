#include "Parser.h"

Parser::Parser(std::istream &in)
   :in_(in)
{
}

std::string Parser::getRawMessage()
{
   std::string line;
   if(getline(in_, line))
   {
      return line;
   }

   throw std::logic_error("Error reading raw message");
}
