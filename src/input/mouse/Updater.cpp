#include "input/Mouse/Updater.hpp"

namespace vulture{
    namespace input{
        using namespace events;
        namespace mouse{
            void
            Updater::operator()(const MouseEvent::Button &buttonEvent) const{
                onButtonUpdate(buttonEvent);
            }

            void
            Updater::operator()(const MouseEvent::Motion &motionEvent) const{
                onMotionUpdate(motionEvent);
            }

            void
            Updater::operator()(const MouseEvent::Wheel &wheelEvent) const{
                onWheelUpdate(wheelEvent);
            }
        }
    }
}
