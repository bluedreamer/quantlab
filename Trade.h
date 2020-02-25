#pragma once

#include "Message.h"

class Trade : public Message
{
public:
   Trade()                = default;
   ~Trade() override;
   Trade(const Trade &) = default;
   Trade(Trade &&)      = default;
   Trade &operator=(const Trade &) = default;
   Trade &operator=(Trade &&) = default;
private:
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
