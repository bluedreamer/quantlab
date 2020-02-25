#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
#include <filesystem>

#include "public.h"
#include "Market.h"
#include "CSVParser.h"

int main(int argc, char *argv[])
{
   if(argc != 2)
   {
      std::cerr << "Usage: " << argv[0] << " <csv filename>\n\n";
      return 1;
   }
   else if(!std::filesystem::exists(argv[1]))
   {
      std::cerr << "Cannot open file: [" << argv[1] << "]\n\n";
      return 2;
   }
   std::ifstream in(argv[1]);

   auto parser = std::make_unique<CSVParser>(in);

   Market market(std::move(parser));

   market.Function();

   return 0;
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
