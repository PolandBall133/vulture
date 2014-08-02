#include "input/Joy/Events.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
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
