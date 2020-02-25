#pragma once

class Message
{
public:
   Message()                = default;
   virtual ~Message()               = 0;
   Message(const Message &) = default;
   Message(Message &&)      = default;
   Message &operator=(const Message &) = default;
   Message &operator=(Message &&) = default;

   virtual uint64_t GetTimestamp() const = 0;
   virtual const std::string &GetSymbol() const = 0;
   virtual uint64_t GetVolume() const = 0;
   virtual uint64_t GetPrice() const = 0;

private:
};

inline Message::~Message()
{
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
