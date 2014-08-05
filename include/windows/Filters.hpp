#pragma once

#include <cinttypes>
#include "events/EventsFilter.hpp"

namespace vulture{
    namespace windows{
        class IsWindowEventFilter:
            public events::EventsFilter{
        public:
            IsWindowEventFilter();
            virtual bool filter(const events::Events &) override;
        };
    }
}
