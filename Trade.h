#pragma once

#include "Message.h"

class Trade : public Message
{
public:
   Trade(Message::TimeStamp timestamp, Message::Symbol symbol, Message::Volume volume, Message::Price price);
   ~Trade() override;
   Trade(const Trade &) = default;
   Trade(Trade &&)      = default;
   Trade &operator=(const Trade &) = default;
   Trade &operator=(Trade &&) = default;

   Volume GetVolume() const override;
   Price  GetPrice() const override;

private:
   Volume volume_;
   Price  price_;
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
