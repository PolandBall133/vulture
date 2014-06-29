#include "../include/Point.hpp"

namespace vulture{
    Point::Point(int32_t x, int32_t y):
        x(x),
        y(y){}

    bool
    Point::operator==(const Point &other) const{
        return x == other.x && y == other.y;
    }

    bool
    Point::operator!=(const Point &other) const{
        return !operator==(other);
    }

    Point
    Point::operator+(const Point &other) const{
        return Point(x+other.x, y+other.y);
    }

    Point
    Point::operator-(const Point &other) const{
        return Point(x-other.x, y-other.y);
    }

    Point
    Point::operator*(const Point &other) const{
        return Point(x*other.x, y*other.y);
    }

    Point
    Point::operator/(const Point &other) const{
        return Point(x/other.x, y/other.y);
    }

    Point
    Point::operator%(const Point &other) const{
        return Point(x%other.x, y%other.y);
    }

    Point &
    Point::operator+=(const Point &other){
        return operator=(operator+(other));
    }

    Point &
    Point::operator-=(const Point &other){
        return operator=(operator-(other));
    }

    Point &
    Point::operator*=(const Point &other){
        return operator=(operator*(other));
    }

    Point &
    Point::operator/=(const Point &other){
        return operator=(operator/(other));
    }

    Point &
    Point::operator%=(const Point &other){
        return operator=(operator%(other));
    }
}
