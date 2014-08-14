#pragma once

#include "input/Mouse/Mouse.hpp"
#include "events/MouseEvent.hpp"

namespace vulture{
    namespace input{
        namespace mouse{
            class Updater{
            public:
                void operator()(const events::MouseEvent::Button &) const;
                void operator()(const events::MouseEvent::Motion &) const;
                void operator()(const events::MouseEvent::Wheel &) const;
            protected:
                virtual void onButtonUpdate(const events::MouseEvent::Button &) const = 0;
                virtual void onMotionUpdate(const events::MouseEvent::Motion &) const = 0;
                virtual void onWheelUpdate(const events::MouseEvent::Wheel &) const = 0;
            };
        }
    }
}
