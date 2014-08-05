#include "events/Event.hpp"

namespace vulture{
    namespace events{
        Event::Type
        Event::type() const{
            return _type;
        }

        const Event::Events &
        Event::events() const{
            return _events;
        }
    }
}
