#pragma once

#include "input/devices/joy/Joy.hpp"
#include <memory>
#include <list>

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                class Manager{
                public:
                    typedef Joy managed_type;
                    typedef std::shared_ptr<managed_type> pointer_type;
                    typedef std::list<pointer_type> container_type;
                private:
                    container_type _storage;
                public:
                    pointer_type requestNew();
                };
            }
        }
    }
}
