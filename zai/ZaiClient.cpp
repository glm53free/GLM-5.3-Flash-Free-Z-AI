// rev-a7b31e-20260827 ZaiClient.cpp
#include "ZaiClient.h"
#include <iostream>

bool ZaiClient::connect(const std::string& host) {
    host_ = host;
    return !host_.empty();
}

int ZaiClient::loop() {
    std::cout << "z.ai ready — glm 5.3 flash / openrouter glm 5.3\n";
    return 0;
}
