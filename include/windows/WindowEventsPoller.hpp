#pragma once

#include "windows/Window.hpp"
#include "windows/WindowEvents.hpp"
#include <memory>
#include <map>

namespace vulture{
    class WindowEventsPoller{
    public:
        void registerWindow(std::weak_ptr<Window>);
        virtual void poll() = 0;
    protected:
        typedef std::map<uint32_t, std::weak_ptr<Window>> container_type;
        container_type windows_container;
    };
}
