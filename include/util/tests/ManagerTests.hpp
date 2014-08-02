#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCase.h>

#include "util/Manager.hpp"

namespace vulture{
    namespace test{
        class ManagerFixture : public CppUnit::TestFixture{
            CPPUNIT_TEST_SUITE(ManagerFixture);
            CPPUNIT_TEST_SUITE_END();
        private:
        public:
        };
    }
}
