#pragma once

#include <cinttypes>
#include "Point.hpp"
#include "Size.hpp"

namespace vulture{

    struct Rectangle{
        int32_t x, y;
        uint32_t width, height;

        Rectangle(int32_t = 0, int32_t = 0, uint32_t = 0, uint32_t = 0);
        Rectangle(const Point &, const Size &);

        const Point position() const;
        const Size size() const;

        bool isEmpty() const;
        bool equals(const Rectangle &) const;
        bool hasIntersection(const Rectangle &) const;
        Rectangle getIntersect(const Rectangle &) const;
        Rectangle getUnion(const Rectangle &) const;

        bool operator==(const Rectangle &) const;
        bool operator!=(const Rectangle &) const;
    };
}
