#pragma once

#include <memory>
#include <iostream>

#include "Message.h"

class Parser
{
public:
   explicit Parser(std::istream &in);
   virtual ~Parser()              = 0;
   Parser(const Parser &) = default;
   Parser(Parser &&)      = default;
   Parser &operator=(const Parser &) = default;
   Parser &operator=(Parser &&) = default;

   virtual std::shared_ptr<Message> GetMessage() = 0;

private:
   std::istream &in_;
};

inline Parser::~Parser()
{
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
