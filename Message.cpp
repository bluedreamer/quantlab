#include "Message.h"

Message::Message(Message::TimeStamp timestamp, Message::Symbol symbol)
   :timestamp_(timestamp)
   , symbol_(symbol)
{
}

Message::TimeStamp Message::GetTimestamp() const
{
   return timestamp_;
}

const Message::Symbol &Message::GetSymbol() const
{
   return symbol_;
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
