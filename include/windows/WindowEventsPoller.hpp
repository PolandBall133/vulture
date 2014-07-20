#pragma once

#include "windows/Window.hpp"
#include <memory>
#include <set>

namespace vulture{
    class WindowEventsPoller{
    public:
        void registerWindow(std::weak_ptr<Window>);
        virtual void PollEvents() = 0;
    protected:
        set<std::weak_ptr<Window>> windows_container;
    };
}
