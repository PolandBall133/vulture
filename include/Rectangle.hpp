#pragma once

#include <cinttypes>

namespace vulture{

    struct Rectangle{
        int32_t x, y, width, height;
        Rectangle(int32_t = 0, int32_t = 0, int32_t = 0, int32_t = 0);

        bool isEmpty() const;
        bool equals(const Rectangle &) const;
        bool hasIntersection(const Rectangle &) const;
        Rectangle getIntersect(const Rectangle &) const;
        Rectangle getUnion(const Rectangle &) const;

        bool operator==(const Rectangle &) const;
        bool operator!=(const Rectangle &) const;
    };
}
