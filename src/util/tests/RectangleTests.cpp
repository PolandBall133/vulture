#include "util/tests/RectangleTests.hpp"

namespace vulture{
    namespace test{
        CPPUNIT_TEST_SUITE_REGISTRATION(RectangleFixture);
        void
        RectangleFixture::isEmpty_test(){
            a = Rectangle(20, 100, 0, 0);
            CPPUNIT_ASSERT(a.isEmpty());
            b = Rectangle(20, 100, 5, 10);
            CPPUNIT_ASSERT(!b.isEmpty());
        }

        void
        RectangleFixture::equals_test(){
            a = b = Rectangle(1, 1, 2, 2);
            CPPUNIT_ASSERT(a.equals(b));
            CPPUNIT_ASSERT(!(a != b));
        }

        void
        RectangleFixture::hasIntersection_test(){
            a = Rectangle(10, 10, 5, 5);
            b = Rectangle(6, 6, 10, 10);
            CPPUNIT_ASSERT(a.hasIntersection(b));
            b = Rectangle(6, 6, 4, 4);
            CPPUNIT_ASSERT(!b.hasIntersection(a));
        }

        void
        RectangleFixture::getIntersect_test(){
            a = Rectangle(0, 0, 10, 10);
            b = Rectangle(5, 5, 5, 5);
            c = a.getIntersect(b);
            CPPUNIT_ASSERT(c == Rectangle(5, 5, 5, 5));
        }

        void
        RectangleFixture::getUnion_test(){
            a = Rectangle(5, 5, 10, 10);
            b = Rectangle(4, 4, 7, 7);
            c = a.getUnion(b);
            CPPUNIT_ASSERT(c == Rectangle(4, 4, 11, 11));
        }
    }
}
