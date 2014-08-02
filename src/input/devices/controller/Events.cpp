#include "input/devices/controller/Events.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            namespace controllers{
                Event::Type
                Event::type() const{
                    return _type;
                }

                const Event::Events
                Event::events() const{
                    return _events;
                }
            }
        }
    }
}
