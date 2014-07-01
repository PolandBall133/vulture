#include "tests/PointTests.hpp"

namespace vulture{
    namespace test{
        CPPUNIT_TEST_SUITE_REGISTRATION(PointFixture);

        void
        PointFixture::arithmetical_test(){
            // "+"
            a = Point(20, 20) + Point(30, 30);
            CPPUNIT_ASSERT(a == Point(50, 50));
            // "-"
            a -= Point(15, 15);
            CPPUNIT_ASSERT(a == Point(35, 35));
            // "*"
            a *= Point(1, 2);
            CPPUNIT_ASSERT(a == Point(35, 70));
            // "/"
            a = Point(12, 9) / Point(4, 3);
            CPPUNIT_ASSERT(a == Point(3, 3));
            // "%"
            a = Point(15, 3) % Point(2, 3);
            CPPUNIT_ASSERT(a == Point(15%2, 3%3));
        }
    }
}
