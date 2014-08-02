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
                CPPUNIT_TEST(using_references_test);
            CPPUNIT_TEST_SUITE_END();
        private:
            typedef Manager<int> manager_type;
            manager_type m;
        public:
            void factory_creating_test();
            void using_references_test();
        };
    }
}
