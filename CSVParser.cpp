#include <string>

#include "CSVParser.h"
#include "Trade.h"

CSVParser::CSVParser(std::istream &in)
   :Parser(in)
{
}

std::shared_ptr<Message> CSVParser::GetMessage()
{
   // Currently only supporting trade messages
   try
   {
      auto raw_message = getRawMessage();
      auto fields = split(std::move(raw_message));
      // validation is that trades have 4 fields
      if(fields.size() == 4)
      {
         return std::make_shared<Trade>(std::stol(fields[0]), fields[1], std::stol(fields[2]), std::stol(fields[3]));
      }
   }
   catch(const std::exception &e)
   {
      // EOF is probably not a real exception an requires its own type
      if(!IsEOF())
      {
         std::cerr << "Exception: " << e.what() << std::endl;
      }
   }
   return 0;
}

std::vector<std::string> CSVParser::split(std::string message)
{
   std::vector<std::string> rc;

   auto it =  message.find(',');
   while(it != std::string::npos)
   {
      rc.emplace_back(message, 0, it);
      ++it;
      message.erase(0, it);
      it = message.find(',');
   }
   // get the last field which doesn't end in a comma
   if(!message.empty())
   {
      rc.emplace_back(message);
   }

   return rc;
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
