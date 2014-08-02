#pragma once

#include <cinttypes>
#include "input/IEventHandler.hpp"

namespace vulture{
    namespace input{
        namespace devices{
            class Device : IEventHandler{
            public:
                Device();
                virtual uint32_t ID() const = 0;
                bool connected() const;
                virtual void onAdded() override;
                virtual void onRemoved() override;
            protected:
                void connected(bool);
            private:
                bool _connected;
            };
        }
    }
}
