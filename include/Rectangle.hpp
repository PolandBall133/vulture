#pragma once

#include <cinttypes>

namespace vulture{

    struct Rectangle{
        int32_t x, y, width, height;
        Rectangle(int32_t = 0, int32_t = 0, int32_t = 0, int32_t = 0);
    };
}
