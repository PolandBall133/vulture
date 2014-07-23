#pragma once

#include "windows/Window.hpp"
#include "windows/Events.hpp"
#include <memory>
#include <map>

namespace vulture{
    namespace windows{
        class EventsPoller{
        public:
            void registerWindow(std::weak_ptr<Window>);
            void unregisterWindow(uint32_t);
            bool windowRegistered(uint32_t) const;
            virtual void poll() = 0;
        protected:
            void callWindowEventHandler(const windows::Event &, uint32_t);
        private:
            typedef std::map<uint32_t, std::weak_ptr<Window>> container_type;
            container_type windows_container;
        };
    }
}
