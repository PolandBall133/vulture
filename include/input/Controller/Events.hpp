#pragma once

#include <cinttypes>

namespace vulture{
    namespace input{
        namespace devices{
            namespace controllers{
                class Event{
                public:
                    class Added{};
                    class Removed{};

                    enum class Type : uint32_t{
                        Added, Removed
                    };

                    union Events{
                        Added added;
                        Removed removed;
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
