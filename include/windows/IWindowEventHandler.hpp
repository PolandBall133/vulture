#pragma once

#include <cinttypes>

namespace vulture{
    class IEventHandler{
        virtual void onShown(){}
        virtual void onExposed(){}
        virtual void onResized(){}
        virtual void onMinimized(){}
        virtual void onMaximized(){}
        virtual void onRestored(){}
        virtual void onClosed(){}
    };
}
