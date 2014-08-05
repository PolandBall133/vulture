#pragma once

#include <cinttypes>
#include "events/EventsFilterGroup.hpp"

#define VULTURE_WINDOWS_DECLARE_FILTER(name) \
    class name##Filter: \
        public events::EventsFilter{ \
    public: \
        name##Filter(); \
        virtual bool filter(const events::Events &) override; \
    }

namespace vulture{
    namespace windows{
        class FiltersGroup:
            public events::EventsFilterGroup{
        public:
            FiltersGroup();
        protected:
            virtual bool checkType(const events::Events &) override;
        };

        VULTURE_WINDOWS_DECLARE_FILTER(Shown);
        VULTURE_WINDOWS_DECLARE_FILTER(Exposed);
        VULTURE_WINDOWS_DECLARE_FILTER(Moved);
        VULTURE_WINDOWS_DECLARE_FILTER(Resized);
        VULTURE_WINDOWS_DECLARE_FILTER(Minimized);
        VULTURE_WINDOWS_DECLARE_FILTER(Maximized);
        VULTURE_WINDOWS_DECLARE_FILTER(Restored);
        VULTURE_WINDOWS_DECLARE_FILTER(Closed);
    }
}
