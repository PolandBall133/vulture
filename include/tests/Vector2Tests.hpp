#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCase.h>

#include "Vector2.hpp"

namespace vulture{
    namespace test{
        class Vector2Fixture : public CppUnit::TestFixture{
        CPPUNIT_TEST_SUITE(Vector2Fixture);
            CPPUNIT_TEST(arithmetical_test);
        CPPUNIT_TEST_SUITE_END();
        private:
            Vector2 a, b;
        public:
            void arithmetical_test();
        };
    }
}

