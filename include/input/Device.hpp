#pragma once

#include <cinttypes>
#include "input/IEventHandler.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            class Device : IEventHandler{
            public:
                virtual uint32_t ID() const = 0;
                bool connected() const;
                virtual onAdded() override;
                virtual onRemoved() override;
            protected:
                void connected(bool);
            private:
                bool _connected;
            };
        }
    }
}
