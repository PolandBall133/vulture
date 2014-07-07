#pragma once
#include <cinttypes>

namespace vulture{
    struct Vector2{
        double x, y;

        constexpr Vector2(double = 0.0, double = 0.0);
        constexpr Vector2(double);

        Vector2 operator+(const Vector2 &) const;
        Vector2 operator-(const Vector2 &) const;
        Vector2 operator*(const Vector2 &) const;
        Vector2 operator/(const Vector2 &) const;

        Vector2 &operator+=(const Vector2 &);
        Vector2 &operator-=(const Vector2 &);
        Vector2 &operator*=(const Vector2 &);
        Vector2 &operator/=(const Vector2 &);

        Vector2 operator-() const;
        bool operator==(const Vector2 &) const;
        bool operator!=(const Vector2 &) const;

        double length() const;
        double lengthSquared() const;

        inline static constexpr Vector2 zero(){
            return Vector2(0.0, 0.0);
        }

        inline static constexpr Vector2 one(){
            return Vector2(1.0, 1.0);
        }

        inline static constexpr Vector2 unitX(){
            return Vector2(1.0, 0.0);
        }

        inline static constexpr Vector2 unitY(){
            return Vector2(0.0, 1.0);
        }


    };
}
