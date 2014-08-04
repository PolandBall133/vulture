#pragma once
#include <cinttypes>

namespace vulture{
    namespace events{
        class WindowEvent{
        public:
            enum Type : uint32_t{
                Shown, Exposed,
                Moved, Resized,
                Minimized, Maximized,
                Restored, Closed
            };

            union Events{

            };

            Type type() const;
            const Events &events() const;
        protected:

        private:
            Type _type;
            Events _events;
        };
    }
}
