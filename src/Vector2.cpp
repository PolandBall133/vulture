#include "Vector2.hpp"

namespace vulture{
    constexpr Vector2::Vector2(double x, double y)
        : x(x),
          y(y){}

    constexpr Vector2::Vector2(double scalar)
        : x(scalar),
          y(scalar){}
}
