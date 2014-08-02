#pragma once

#include <cinttypes>

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                class Event{
                public:
                    enum class Type : uint32_t{
                        Added, Removed
                    };

                    union Events{
                    };

                    const Events events() const;
                    Type type() const;
                protected:
                    Events _events;
                    Type _type;
                };
            }
        }
    }
}
