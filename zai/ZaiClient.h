// rev-a7b31e-20260827 ZaiClient.h
#pragma once
#include <string>
class ZaiClient {
public:
    bool connect(const std::string& host);
    int loop();
private:
    std::string host_;
};
