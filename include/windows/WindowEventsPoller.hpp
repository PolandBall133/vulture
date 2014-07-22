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
        void callWindowEventHandler(const WindowEvent &, uint32_t);
    private:
        bool isWindowExpired(uint32_t) const;
        void unregisterWindow(uint32_t);
        void callSpecifiedWindowEventHandler(const WindowEvent &, Window &);
        typedef std::map<uint32_t, std::weak_ptr<Window>> container_type;
        container_type windows_container;
    };
}
