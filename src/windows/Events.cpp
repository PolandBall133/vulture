#include "windows/Events.hpp"

namespace vulture{
    namespace windows{
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
