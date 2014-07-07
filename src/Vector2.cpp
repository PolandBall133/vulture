#include "Vector2.hpp"
#include "MathHelper.hpp"
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

    double
    Vector2::length() const{
        return sqrt(lengthSquared());
    }

    double
    Vector2::lengthSquared() const{
        return x*x + y*y;
    }

    void
    Vector2::normalize(){
        double val = 1.0 / length();
        x *= val;
        y *= val;
    }



    Vector2
    Vector2::barycentric(const Vector2 &value1,
                         const Vector2 &value2,
                         const Vector2 &value3,
                         double amount1,
                         double amount2)
    {
        return Vector2(
            MathHelper::Barycentric(value1.x, value2.x, value3.x, amount1, amount2),
            MathHelper::Barycentric(value1.y, value2.y, value3.y, amount1, amount2)
        );
    }

    Vector2
    Vector2::catmullRom(const Vector2 &value1,
                        const Vector2 &value2,
                        const Vector2 &value3,
                        const Vector2 &value4,
                        double amount)
    {
        return Vector2(
            MathHelper::CatmullRom(value1.x, value2.x, value3.x, value4.x, amount),
            MathHelper::CatmullRom(value1.y, value2.y, value3.y, value4.y, amount)
        );
    }

    Vector2
    Vector2::clamp(const Vector2 &value1,
                   const Vector2 &min,
                   const Vector2 &max)
    {
        return Vector2(
            MathHelper::Clamp<double>(value1.x, min.x, max.x),
            MathHelper::Clamp<double>(value1.y, min.y, max.y)
        );
    }

    double
    Vector2::distance(const Vector2 &value1,
                      const Vector2 &value2)
    {
        Vector2 v = value1-value2;
        return sqrt(v.x*v.x + v.y*v.y);
    }

    double
    Vector2::distanceSquared(const Vector2 &value1,
                             const Vector2 &value2)
    {
        Vector2 v = value1-value2;
        return v.x*v.x + v.y*v.y;
    }

    double
    Vector2::dot(const Vector2 &value1,
                 const Vector2 &value2)
    {
        return value1.x*value2.x + value1.y*value2.y;
    }

    Vector2
    Vector2::reflect(const Vector2 &vec,
                     const Vector2 &normal)
    {
        Vector2 result;
        double val = 2.0 * ((vec.x * normal.x) + (vec.y * normal.y));
        result.x = vec.x - (normal.x * val);
        result.y = vec.y - (normal.y * val);
        return result;
    }

    Vector2
    Vector2::hermite(const Vector2 &value1,
                     const Vector2 &tangent1,
                     const Vector2 &value2,
                     const Vector2 &tangent2,
                     double amount)
    {
        return Vector2(
            MathHelper::Hermite(value1.x, tangent1.x, value2.x, tangent2.x, amount),
            MathHelper::Hermite(value1.y, tangent1.y, value2.y, tangent2.y, amount)
        );
    }

    Vector2
    Vector2::lerp(const Vector2 &value1,
                  const Vector2 &value2,
                  double amount)
    {
        return Vector2(
            MathHelper::Lerp(value1.x, value2.x, amount),
            MathHelper::Lerp(value1.y, value2.y, amount)
        );
    }

    Vector2
    Vector2::max(const Vector2 &value1,
                 const Vector2 &value2)
    {
        return Vector2(
            value1.x > value2.x ? value1.x : value2.x,
            value1.y > value2.y ? value1.y : value2.y
        );
    }

    Vector2
    Vector2::min(const Vector2 &value1,
                 const Vector2 &value2)
    {
        return Vector2(
            value1.x < value2.x ? value1.x : value2.x,
            value1.y < value2.y ? value1.y : value2.y
        );
    }

    Vector2
    Vector2::smoothStep(const Vector2 &value1,
                        const Vector2 &value2,
                        double amount)
    {
        return Vector2(
            MathHelper::SmoothStep(value1.x, value2.x, amount),
            MathHelper::SmoothStep(value1.y, value2.y, amount)
        );
    }
}
