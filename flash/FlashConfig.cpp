// rev-a7b31e-20260827 FlashConfig.cpp
#include "FlashConfig.h"

FlashConfig FlashConfig::defaults() {
    FlashConfig c;
    c.model = "glm-5.3-flash";
    c.temperature = 0.7f;
    c.maxTokens = 8192;
    c.ctx = 128000;
    return c;
}
