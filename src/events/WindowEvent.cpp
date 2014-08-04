#include "events/WindowEvent.hpp"

namespace vulture{
    namespace events{
        WindowEvent::Type
        WindowEvent::type() const{
            return _type;
        }

        const WindowEvent::Events &
        WindowEvent::events() const{
            return _events;
        }

        uint32_t
        WindowEvent::windowID() const{
            return _windowID;
        }

        void
        WindowEvent::windowID(uint32_t val){
            _windowID = val;
        }
    }
}
