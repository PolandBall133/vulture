#include "input/Mouse/Filters.hpp"

#define VULTURE_INPUT_MOUSE_DEFINE_FILTER(name) \
    name##Filter:: name##Filter(): \
        Filter( "input::mouse::" #name "Filter" ){} \
    bool name##Filter::filter(const Event &event){ \
        return event.events.mouse.type == MouseEvent::Type:: name; \
    }

using namespace std;
namespace vulture{
    using namespace events;
    namespace input{
        namespace mouse{
            FiltersGroup::FiltersGroup():
                events::FiltersGroup("input::mouse::Filters"){}

            bool
            FiltersGroup::checkType(const Event &event){
                return event.type == Event::Type::Mouse;
            }

            VULTURE_INPUT_MOUSE_DEFINE_FILTER(Button);
            VULTURE_INPUT_MOUSE_DEFINE_FILTER(Motion);
            VULTURE_INPUT_MOUSE_DEFINE_FILTER(Wheel);
        }
    }
}
