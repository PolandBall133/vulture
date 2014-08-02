#include "input/devices/joy/Joy.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                const std::string &
                Joy::name() const{
                    return _name;
                }

                bool
                Joy::connected() const{
                    return _connected;
                }

                void
                Joy::onAdded(){
                    connected(true);
                }

                void
                Joy::onRemoved(){
                    connected(false);
                }

                void
                Joy::name(const std::string &name){
                    _name = name;
                }

                void
                Joy::connected(bool connected){
                    _connected = connected;
                }
            }
        }
    }
}
