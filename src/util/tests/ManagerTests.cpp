#include "util/tests/ManagerTests.hpp"

namespace vulture{
    namespace test{
        CPPUNIT_TEST_SUITE_REGISTRATION(ManagerFixture);

        void
        ManagerFixture::factory_creating_test(){
            int &a = m.factory().create();
            int &b = m.factory().create();
            int &c = m.factory().create();
            a = 111; b = a*2; c = a*3;
            CPPUNIT_ASSERT(m.size() == 3);
        }
    }
}
