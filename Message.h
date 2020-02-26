#pragma once

#include <string>

#include "public.h"

class Message
{
public:
   enum class MsgType
   {
      Unknown,
      Trade
   };

   Message(MsgType msg_type, TimeStamp timestamp, Symbol symbol);
   virtual ~Message()       = 0;
   Message(const Message &) = default;
   Message(Message &&)      = default;
   Message &operator=(const Message &) = default;
   Message &operator=(Message &&) = default;

   TimeStamp      GetTimestamp() const;
   const Symbol & GetSymbol() const;
   virtual Volume GetVolume() const = 0;
   virtual Price  GetPrice() const  = 0;
   MsgType        GetMsgType() const;

private:
   MsgType   msg_type_{MsgType::Unknown};
   TimeStamp timestamp_{0};
   Symbol    symbol_;
};

inline Message::~Message()
{
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
