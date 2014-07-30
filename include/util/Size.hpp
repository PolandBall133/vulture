#pragma once
#include <cinttypes>

namespace vulture{
    struct Size{
        Size(uint32_t w = 0, uint32_t h = 0):
            width(w),
            height(h){}

        uint32_t width;
        uint32_t height;
    };
}
