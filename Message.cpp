#include "Message.h"

Message::Message(MsgType msg_type, TimeStamp timestamp, Symbol symbol)
   : msg_type_(msg_type)
   , timestamp_(timestamp)
   , symbol_(symbol)
{
}

TimeStamp Message::GetTimestamp() const
{
   return timestamp_;
}

const Symbol &Message::GetSymbol() const
{
   return symbol_;
}

Message::MsgType Message::GetMsgType() const
{
   return msg_type_;
}

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
