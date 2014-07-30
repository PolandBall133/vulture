#pragma once
#include <cinttypes>

namespace vulture{
    struct Point{
        int32_t x, y;
        Point(int32_t = 0, int32_t = 0);

        inline static Point zero();
        inline static Point one();
        inline static Point unitX();
        inline static Point unitY();


        inline Point operator-() const;
        bool operator==(const Point &) const;
        bool operator!=(const Point &) const;
        Point operator+(const Point &) const;
        Point operator-(const Point &) const;
        Point operator*(const Point &) const;
        Point operator/(const Point &) const;
        Point operator%(const Point &) const;
        Point &operator+=(const Point &);
        Point &operator-=(const Point &);
        Point &operator*=(const Point &);
        Point &operator/=(const Point &);
        Point &operator%=(const Point &);
    };

    Point Point::zero(){
        return Point(0, 0);
    }

    Point Point::one(){
        return Point(1, 1);
    }

    Point Point::unitX(){
        return Point(1, 0);
    }

    Point Point::unitY(){
        return Point(0, 1);
    }

    Point Point::operator-() const{
        return Point(-x, -y);
    }
}
