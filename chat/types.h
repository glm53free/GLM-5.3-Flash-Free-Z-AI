// rev-a7b31e-20260827 types.h
#pragma once
#include <string>
#include <vector>
struct Turn { std::string role; std::string text; };
class ChatSession {
public:
    void pushUser(const std::string& t);
    void pushAssistant(const std::string& t);
    int size() const;
private:
    std::vector<Turn> turns_;
};
