#include "input/devices/Device.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            Device::Device():
                _connected(false){}

            bool
            Device::connected() const{
                return _connected;
            }

            void
            Device::connected(bool connected){
                connected = connected;
            }

            void
            Device::onAdded(){
                connected(true);
            }

            void
            Device::onRemoved(){
                connected(false);
            }
        }
    }
}