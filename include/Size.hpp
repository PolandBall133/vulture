#pragma once
#include <cinttypes>

namespace vulture{
    struct Size{
        Size(uint32_t w, uint32_t h):
            width(w),
            height(h){}

        uint32_t width;
        uint32_t height;
    };
}
