#include "input/Mouse/EventsCaller.hpp"

#define VULTURE_INPUT_MOUSE_DECLARE_INJECTED_UPDATER_FILTER(name, lowercasename) \
    EventsCaller:: name##Filter:: name##Filter( \
        Updater &updater \
    ): _updater(updater){} \
    bool \
    EventsCaller:: name##Filter::filter(const Event &event){ \
        if(!mouse:: name##Filter::filter(event)) return false; \
        _updater(event.events.mouse.events. lowercasename); \
        return true; \
    }

using namespace std;
namespace vulture{
    using namespace events;
    namespace input{
        namespace mouse{
            VULTURE_INPUT_MOUSE_DECLARE_INJECTED_UPDATER_FILTER(Button, button);
            VULTURE_INPUT_MOUSE_DECLARE_INJECTED_UPDATER_FILTER(Motion, motion);
            VULTURE_INPUT_MOUSE_DECLARE_INJECTED_UPDATER_FILTER(Wheel, wheel);

            EventsCaller::EventsCaller(
                System &system, Updater &updater
            ){
                _filtersGroup = make_shared<FiltersGroup>();
                (*_filtersGroup.get())
                    .add(make_shared<ButtonFilter>(updater))
                    .add(make_shared<MotionFilter>(updater))
                    .add(make_shared<WheelFilter>(updater));
                system.addFilters(_filtersGroup);
            }
        }
    }
}
