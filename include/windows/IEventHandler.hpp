#pragma once

#include <cinttypes>
#include "events/WindowEvent.hpp"

namespace vulture{
    namespace windows{
        class IEventHandler{
        public:
            virtual void onShown(){}
            virtual void onExposed(){}
            virtual void onMoved(const events::WindowEvent::Moved &){}
            virtual void onResized(const events::WindowEvent::Resized &){}
            virtual void onMinimized(){}
            virtual void onMaximized(){}
            virtual void onRestored(){}
            virtual void onClosed(){}
        };
    }
}
