#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCase.h>

#include "Point.hpp"

namespace vulture{
    namespace test{
        class RectangleSuite : public CppUnit::TestFixture{
        public:
            void isEmpty_test();
            void equals_test();
            void hasIntersection_test();
            void getIntersect_test();
            void getUnion_test();
        };
    }
}
