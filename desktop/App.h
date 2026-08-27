// rev-a7b31e-20260827 App.h
#pragma once
#include <string>
#include "../zai/ZaiClient.h"

class GlmFlashApp {
public:
    bool init();
    int run();
private:
    std::string name_;
    std::string version_;
    ZaiClient client_;
};
