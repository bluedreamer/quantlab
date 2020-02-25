#pragma once

#include <string>
#include <vector>

#include "Parser.h"

class CSVParser : public Parser
{
public:
   explicit CSVParser(std::istream &in);
   ~CSVParser()               = default;
   CSVParser(const CSVParser &) = default;
   CSVParser(CSVParser &&)      = default;
   CSVParser &operator=(const CSVParser &) = default;
   CSVParser &operator=(CSVParser &&) = default;

   std::shared_ptr<Message> GetMessage() override;
private:
   static std::vector<std::string> split(std::string message);
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
