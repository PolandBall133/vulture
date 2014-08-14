#pragma once

#include "util/Point.hpp"
#include "events/System.hpp"

namespace vulture{
    namespace input{
        namespace mouse{
            class Mouse{
            public:
                Point position() const;
                virtual void position(Point) = 0;
            private:
                Point _position;
            };
        }
    }
}
