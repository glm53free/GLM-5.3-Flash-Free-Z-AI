// rev-a7b31e-20260827 ChatSession.cpp
#include "types.h"
#include <iostream>
#include <string>

void ChatSession::pushUser(const std::string& t) {
    turns_.push_back({"user", t});
}

void ChatSession::pushAssistant(const std::string& t) {
    turns_.push_back({"assistant", t});
}

int ChatSession::size() const { return (int)turns_.size(); }
