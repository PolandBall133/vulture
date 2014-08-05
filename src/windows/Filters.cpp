#include "windows/Filters.hpp"

#define VULTURE_WINDOWS_DEFINE_FILTER(name) \
    name##Filter:: name##Filter(): \
        EventsFilter( "windows::" #name "Filter" ){} \
    bool name##Filter::filter(const Events &events){ \
        return events.events().window.type() == WindowEvent::Type:: name; \
    }

namespace vulture{
    using namespace events;
    namespace windows{
        FiltersGroup::FiltersGroup():
            EventsFilterGroup("windows::Filters"){}

        bool
        FiltersGroup::checkType(const Events &events){
            return events.type() == Events::Type::Window;
        }

        VULTURE_WINDOWS_DEFINE_FILTER(Shown);
        VULTURE_WINDOWS_DEFINE_FILTER(Exposed);
        VULTURE_WINDOWS_DEFINE_FILTER(Moved);
        VULTURE_WINDOWS_DEFINE_FILTER(Resized);
        VULTURE_WINDOWS_DEFINE_FILTER(Minimized);
        VULTURE_WINDOWS_DEFINE_FILTER(Maximized);
        VULTURE_WINDOWS_DEFINE_FILTER(Restored);
        VULTURE_WINDOWS_DEFINE_FILTER(Closed);
    }
}
