#pragma once

#include <memory>

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

   void Function();

private:
   std::unique_ptr<Parser> parser_;
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
