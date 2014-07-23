#pragma once

#include <cinttypes>
#include "windows/Events.hpp"

namespace vulture{
    namespace windows{
        class IEventHandler{
        public:
            virtual void onShown(const Event::Shown &){}
            virtual void onExposed(const Event::Exposed &){}
            virtual void onMoved(const Event::Moved &){}
            virtual void onResized(const Event::Resized &){}
            virtual void onMinimized(const Event::Minimized &){}
            virtual void onMaximized(const Event::Maximized &){}
            virtual void onRestored(const Event::Restored &){}
            virtual void onClosed(const Event::Closed &){}
        };
    }
}
