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
        //TODO: normalized()
        void normalize();

        /** static methods from MonoGame,
          * unit-tests are not needed.
          */
        static Vector2 barycentric(const Vector2 &, const Vector2 &, const Vector2 &, double, double);
        static Vector2 catmullRom(const Vector2 &, const Vector2 &, const Vector2 &, const Vector2 &, double);
        static Vector2 clamp(const Vector2 &, const Vector2 &, const Vector2 &);
        static double distance(const Vector2 &, const Vector2 &);
        static double distanceSquared(const Vector2 &, const Vector2 &);
        static double dot(const Vector2 &, const Vector2 &);
        static Vector2 reflect(const Vector2 &, const Vector2 &);
        static Vector2 hermite(const Vector2 &, const Vector2 &, const Vector2 &, const Vector2 &, double);
        static Vector2 lerp(const Vector2 &, const Vector2 &, double);
        static Vector2 max(const Vector2 &, const Vector2 &);
        static Vector2 min(const Vector2 &, const Vector2 &);
        static Vector2 smoothStep(const Vector2 &, const Vector2 &, double);

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
