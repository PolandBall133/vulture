#pragma once

#include "events/System.hpp"

#include "input/Mouse/Updater.hpp"
#include "input/Mouse/Filters.hpp"

#define VULTURE_INPUT_MOUSE_DEFINE_INJECTED_UPDATER_FILTER(name) \
    class name##Filter: \
        public mouse:: name##Filter{ \
    public: \
        name##Filter(Updater &); \
        virtual bool filter(const events::Event &) override; \
    private: \
        Updater &_updater; \
    };
namespace vulture{
    namespace input{
        namespace mouse{
            class EventsCaller{
            public:
                EventsCaller(events::System &, Updater &);
            private:
                VULTURE_INPUT_MOUSE_DEFINE_INJECTED_UPDATER_FILTER(Button);
                VULTURE_INPUT_MOUSE_DEFINE_INJECTED_UPDATER_FILTER(Motion);
                VULTURE_INPUT_MOUSE_DEFINE_INJECTED_UPDATER_FILTER(Wheel);
            };
        }
    }
}
