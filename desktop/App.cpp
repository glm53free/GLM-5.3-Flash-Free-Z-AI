// rev-a7b31e-20260827 App.cpp
#include "App.h"
#include "../zai/ZaiClient.h"
#include <iostream>

bool GlmFlashApp::init() {
    name_ = "GLM 5.3 Flash Free Z.AI";
    version_ = "5.3.1";
    return client_.connect("https://chat.z.ai");
}

int GlmFlashApp::run() {
    std::cout << name_ << " v" << version_ << " — free glm 5.3 flash\n";
    return client_.loop();
}
