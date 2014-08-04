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
            uint32_t windowID() const;
        protected:
            void windowID(uint32_t);
        private:
            Type _type;
            Events _events;
            uint32_t _windowID;
        };
    }
}
