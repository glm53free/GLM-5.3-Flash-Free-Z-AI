// rev-a7b31e-20260827 TokenMeter.h
#pragma once
struct TokenMeter {
    int used = 0;
    void add(int n) { used += n; }
    bool warn() const { return used > 100000; }
};
