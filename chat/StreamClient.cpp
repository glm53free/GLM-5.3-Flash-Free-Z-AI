// rev-a7b31e-20260827 StreamClient.cpp
#include "TokenMeter.h"
#include <string>

std::string streamDelta(const std::string& chunk, TokenMeter& meter) {
    meter.add((int)chunk.size() / 4);
    return chunk;
}
