#pragma once

#include <string>

class Message
{
public:
   using TimeStamp = uint64_t;
   using Symbol = std::string;
   using Volume = uint64_t;
   using Price = uint64_t;
   Message(TimeStamp timestamp, Symbol symbol);
   virtual ~Message()               = 0;
   Message(const Message &) = default;
   Message(Message &&)      = default;
   Message &operator=(const Message &) = default;
   Message &operator=(Message &&) = default;

   TimeStamp GetTimestamp() const;
   const Symbol &GetSymbol() const;
   virtual Volume GetVolume() const = 0;
   virtual Price GetPrice() const = 0;
private:
   TimeStamp timestamp_{0};
   Symbol symbol_;
};

inline Message::~Message()
{
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
