#include "events/Events.hpp"

namespace vulture{
    namespace events{
        Events::Type
        Events::type() const{
            return _type;
        }

        const Events::EventsUnion &
        Events::events() const{
            return _events;
        }
    }
}
