#include "Vector2.hpp"
#include <cmath>
#include <limits>

namespace vulture{
    Vector2::Vector2(double x, double y)
        : x(x),
          y(y){}

    Vector2::Vector2(double scalar)
        : x(scalar),
          y(scalar){}

    Vector2
    Vector2::operator+(const Vector2 &other) const{
        return Vector2(x+other.x, y+other.y);
    }

    Vector2
    Vector2::operator-(const Vector2 &other) const{
        return Vector2(x-other.x, y-other.y);
    }

    Vector2
    Vector2::operator*(const Vector2 &other) const{
        return Vector2(x*other.x, y*other.y);
    }

    Vector2
    Vector2::operator/(const Vector2 &other) const{
        return Vector2(x/other.x, y/other.y);
    }

    Vector2 &
    Vector2::operator+=(const Vector2 &other){
        return operator=(operator+(other));
    }

    Vector2 &
    Vector2::operator-=(const Vector2 &other){
        return operator=(operator-(other));
    }

    Vector2 &
    Vector2::operator*=(const Vector2 &other){
        return operator=(operator*(other));
    }

    Vector2 &
    Vector2::operator/=(const Vector2 &other){
        return operator=(operator/(other));
    }

        Vector2
    Vector2::operator-() const{
        return Vector2(-x, -y);
    }

    bool
    Vector2::operator==(const Vector2 &other) const{
        constexpr double epsilon = std::numeric_limits<double>::epsilon();
        return (std::abs(x-other.x)<epsilon && std::abs(y-other.y)<epsilon);
    }

    bool
    Vector2::operator!=(const Vector2 &other) const{
        return !operator==(other);
    }
}
