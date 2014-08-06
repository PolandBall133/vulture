#pragma once

#include <cinttypes>
#include "windows/Window.hpp"
#include "windows/Filters.hpp"
#include "events/System.hpp"
#include <list>
#include <memory>

#define VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(name) \
    class name##Filter: \
        public windows:: name##Filter{ \
    public: \
        name##Filter(std::list<std::weak_ptr<Window>> &); \
        virtual bool filter(const events::Event &) override; \
    private: \
        std::list<std::weak_ptr<Window>> &_windows; \
    }

namespace vulture{
    namespace windows{
        class EventsCaller{
        public:
            EventsCaller(std::shared_ptr<events::System>);
            EventsCaller &add(std::weak_ptr<Window>);
        protected:
            std::list<std::weak_ptr<Window>> _windows;
            std::shared_ptr<events::System> _system;
            FiltersGroup _filtersGroup;

            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Shown);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Exposed);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Moved);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Resized);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Minimized);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Maximized);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Restored);
            VULTURE_WINDOWS_DEFINE_INJECTED_WINDOWS_LIST_FILTER(Closed);
        };
    }
}
