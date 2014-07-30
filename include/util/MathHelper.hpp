#pragma once

#include <cmath>

namespace vulture{

    /*! MathHelper from MonoGame,
* unit-tests are not needed.
*/
    class MathHelper{
    public:
        static constexpr double E = 2.71828183;
        static constexpr double Log10E = 0.4342945;
        static constexpr double Log2E = 1.442695;
        static constexpr double Pi = 3.141592653589793238462;

        static constexpr double PiOver2 = Pi / 2.0;
        static constexpr double PiOver4 = Pi / 4.0;
        static constexpr double TwoPi = Pi * 2.0;

        static double Barycentric(double value1, double value2, double value3, double amount1, double amount2){
            return value1 + (value2 - value1) * amount1 + (value3 - value1) * amount2;
        }

        static double CatmullRom(double value1, double value2, double value3, double value4, double amount){
            const double amountSquared = amount * amount;
            const double amountCubed = amountSquared * amount;
            return (0.5 * (2.0 * value2 +
                (value3 - value1) * amount +
                (2.0 * value1 - 5.0 * value2 + 4.0 * value3 - value4) * amountSquared +
                (3.0 * value2 - value1 - 3.0 * value3 + value4) * amountCubed));
        }

        template<typename T>
        static T Clamp(T value, T min, T max){
            // First we check to see if we're greater than the max
            value = (value > max) ? max : value;
            // Then we check to see if we're less than the min.
            value = (value < min) ? min : value;
            // There's no check to see if min > max.
            return value;
        }

        template<typename T>
        static T Distance(T a, T b){
            return abs(a - b);
        }

        static double Hermite(double value1, double tangent1, double value2, double tangent2, double amount){
            double v1 = value1, v2 = value2, t1 = tangent1, t2 = tangent2, s = amount, result;
            double sCubed = s * s * s;
            double sSquared = s * s;

            if (amount == 0.0)
                result = value1;
            else if (amount == 1.0)
                result = value2;
            else
                result = (2 * v1 - 2 * v2 + t2 + t1) * sCubed +
                    (3 * v2 - 3 * v1 - 2 * t1 - t2) * sSquared +
                    t1 * s +
                    v1;
            return result;
        }

        static double Lerp(double value1, double value2, double amount){
            return value1 + (value2 - value1) * amount;
        }

        template<typename T>
        static const T &Max(const T &a, const T &b){
            return a < b ? b : a;
        }

        template<typename T>
        static const T &Min(const T &a, const T &b){
            return a > b ? b : a;
        }

        static double SmoothStep(double value1, double value2, double amount){
            // It is expected that 0 < amount < 1
            // If amount < 0, return value1
            // If amount > 1, return value2
            double result = MathHelper::Clamp<double>(amount, 0.0, 1.0);
            result = MathHelper::Hermite(value1, 0.0, value2, 0.0, result);

            return result;
        }

        static double ToDegrees(double radians){
            return radians * 57.295779513082320876798154814105;
        }

        static double ToRadians(double degrees){
            return degrees * 0.0174532925199432957692369076848;
        }

        static double WrapAngle(double angle){
            angle = fmod(angle, 6.2831854820251465);
            if (angle <= -3.14159274)
                angle += 6.28318548;
            else if (angle > 3.14159274)
                angle -= 6.28318548;
            return angle;
        }

        static bool IsPowerOfTwo(int value){
            return (value > 0) && ((value & (value - 1)) == 0);
        }
    };
}