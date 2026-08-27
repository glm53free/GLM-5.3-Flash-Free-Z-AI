// rev-a7b31e-20260827 main.cpp
#include "App.h"
#include <iostream>

int main() {
    GlmFlashApp app;
    if (!app.init()) {
        std::cerr << "GLM 5.3 Flash Free Z.AI failed to start\n";
        return 1;
    }
    return app.run();
}
