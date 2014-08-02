#include "input/devices/joy/Joy.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                const std::string &
                Joy::name() const{
                    return _name;
                }

                void
                Joy::name(const std::string &name){
                    _name = name;
                }
            }
        }
    }
}
