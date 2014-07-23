#include "windows/Events.hpp"

namespace vulture{
    namespace window{
        Event::Type
        Event::type() const{
            return _type;
        }

        const Event::Event
        Event::event() const{
            return _event;
        }
    }
}
