#include "tests/Vector2Tests.hpp"
#include <limits>

namespace vulture{
    namespace test{
        CPPUNIT_TEST_SUITE_REGISTRATION(Vector2Fixture);

        void
        Vector2Fixture::arithmetical_test(){
            constexpr double eps = std::numeric_limits<double>::epsilon();
            a = Vector2(15.0, 15.0);
            // "+"
            a += Vector2(30.0, 20.0);
            CPPUNIT_ASSERT_DOUBLES_EQUAL(45.0, a.x, eps);
            CPPUNIT_ASSERT_DOUBLES_EQUAL(35.0, a.y, eps);
            // "-"
            b = Vector2::unitX() - a;
            CPPUNIT_ASSERT_DOUBLES_EQUAL(-44.0, b.x, eps);
            CPPUNIT_ASSERT_DOUBLES_EQUAL(-35.0, b.y, eps);
            // "*"
            a *= Vector2::unitX();
            CPPUNIT_ASSERT_DOUBLES_EQUAL(45.0, a.x, eps);
            CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, a.y, eps);
            // "/"
            b /= Vector2(2.0, 3.5);
            CPPUNIT_ASSERT_DOUBLES_EQUAL(-44/2.0, b.x, eps);
            CPPUNIT_ASSERT_DOUBLES_EQUAL(-35/3.5, b.y, eps);
        }
    }
}
