#pragma once

#include <cinttypes>
#include "events/FiltersGroup.hpp"

namespace vulture{
    namespace windows{
        class FiltersGroup:
            public events::FiltersGroup{
        public:
            FiltersGroup();
        protected:
            virtual bool checkType(const events::Event &) override;
        };

        VULTURE_DECLARE_FILTER(Shown);
        VULTURE_DECLARE_FILTER(Exposed);
        VULTURE_DECLARE_FILTER(Moved) ;
        VULTURE_DECLARE_FILTER(Resized);
        VULTURE_DECLARE_FILTER(Minimized);
        VULTURE_DECLARE_FILTER(Maximized);
        VULTURE_DECLARE_FILTER(Restored);
        VULTURE_DECLARE_FILTER(Closed);
    }
}
