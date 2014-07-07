#include "Vector2.hpp"

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
}
