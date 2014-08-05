#pragma once

#include <cinttypes>
#include "events/FilterGroup.hpp"

#define VULTURE_WINDOWS_DECLARE_FILTER(name) \
    class name##Filter: \
        public events::Filter{ \
    public: \
        name##Filter(); \
        virtual bool filter(const events::Event &) override; \
    }

namespace vulture{
    namespace windows{
        class FiltersGroup:
            public events::FilterGroup{
        public:
            FiltersGroup();
        protected:
            virtual bool checkType(const events::Event &) override;
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
