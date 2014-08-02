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
                CPPUNIT_TEST(factory_creating_test);
            CPPUNIT_TEST_SUITE_END();
        private:
            typedef Manager<int> manager_type;
        public:
            manager_type factory_creating_test();
        };
    }
}
