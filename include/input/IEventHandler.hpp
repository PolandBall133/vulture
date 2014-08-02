#pragma once

namespace vulture{
    namespace input{
        namespace devices{
            class IEventHandler{
            public:
                virtual void onAdded(){}
                virtual void onRemoved(){}
            };
        }
    }
}
