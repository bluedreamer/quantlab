#pragma once

#include <memory>
#include <string>
#include <vector>
#include <map>

#include "Instrument.h"

class Parser;
class Message;

class Market
{
public:
   explicit Market(std::unique_ptr<Parser> parser);
   ~Market()               = default;
   Market(const Market &) = default;
   Market(Market &&)      = default;
   Market &operator=(const Market &) = default;
   Market &operator=(Market &&) = default;

   void Process();
   uint64_t MessageCount() const;
   std::vector<std::string> GetSymbols() const;

private:
   std::unique_ptr<Parser> parser_;
   uint64_t messages_processed_{0};
   std::map<std::string, Instrument> data_{};

   void processMessage(std::shared_ptr<Message> message);
   void processTrade(Instrument &instrument, std::shared_ptr<Message> message);
   Instrument &findOrAdd(const std::string &symbol);
};

// vim: ts=3 sw=3 ai et nohls mps=(\:),{\:},[\:],<\:> ff=unix ffs=unix bg=dark
