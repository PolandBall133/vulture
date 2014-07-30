#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCase.h>

#include "util/Rectangle.hpp"

namespace vulture{
    namespace test{
        class RectangleFixture : public CppUnit::TestFixture{
        CPPUNIT_TEST_SUITE(RectangleFixture);
            CPPUNIT_TEST(isEmpty_test);
            CPPUNIT_TEST(equals_test);
            CPPUNIT_TEST(hasIntersection_test);
            CPPUNIT_TEST(getIntersect_test);
            CPPUNIT_TEST(getUnion_test);
        CPPUNIT_TEST_SUITE_END();
        private:
            Rectangle a, b, c;
        public:
            void isEmpty_test();
            void equals_test();
            void hasIntersection_test();
            void getIntersect_test();
            void getUnion_test();
        };
    }
}

