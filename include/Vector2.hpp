#pragma once
#include <cinttypes>

namespace vulture{
    struct Vector2{
        double x, y;

        Vector2(double = 0.0, double = 0.0);
        Vector2(double);
    };
}
