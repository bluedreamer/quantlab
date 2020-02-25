#pragma once

class Example
{
public:
   Example()=default;
   ~Example()=default;
   Example(const Example&)=default;
   Example(Example&&)=default;
   Example &operator=(const Example&)=default;
   Example &operator=(Example&&)=default;

   void Function();
private:
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
