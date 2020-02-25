#pragma once

#include <memory>
#include <string>
#include <vector>

class Parser;

class Market
{
public:
   explicit Market(std::unique_ptr<Parser> parser);
   ~Market()               = default;
   Market(const Market &) = default;
   Market(Market &&)      = default;
   Market &operator=(const Market &) = default;
   Market &operator=(Market &&) = default;

   void Process();
   uint64_t MessageCount() const;
   std::vector<std::string> GetSymbols() const;

private:
   std::unique_ptr<Parser> parser_;
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
