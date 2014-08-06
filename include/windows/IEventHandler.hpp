#pragma once

#include <cinttypes>
#include "events/WindowEvent.hpp"

namespace vulture{
    namespace windows{
        class IEventHandler{
        public:
            virtual void onShown(const events::WindowEvent::Shown &){}
            virtual void onExposed(const events::WindowEvent::Exposed &){}
            virtual void onMoved(const events::WindowEvent::Moved &){}
            virtual void onResized(const events::WindowEvent::Resized &){}
            virtual void onMinimized(const events::WindowEvent::Minimized &){}
            virtual void onMaximized(const events::WindowEvent::Maximized &){}
            virtual void onRestored(const events::WindowEvent::Restored &){}
            virtual void onClosed(const events::WindowEvent::Closed &){}
        };
    }
}
