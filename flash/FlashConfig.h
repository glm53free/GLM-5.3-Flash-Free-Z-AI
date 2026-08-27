// rev-a7b31e-20260827 FlashConfig.h
#pragma once
#include <string>
struct FlashConfig {
    std::string model;
    float temperature;
    int maxTokens;
    int ctx;
    static FlashConfig defaults();
};
