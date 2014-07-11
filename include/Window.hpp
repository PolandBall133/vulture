#pragma once

#include <cinttypes>
#include <string>

namespace vulture{
    class Window{
    public:
        enum Flags : uint32_t{
            FullScreen = 1,
            Shown = 4,
            Hidden = 8,
            BorderLess = 16,
            Resizable = 32,
            Minimized = 64,
            Maximized = 128,
            Input_Grabbed = 256,
            Input_Focus = 512,
            Mouse_Focus = 1024,
            Foreign = 2048,
            FullScreen_Desktop = 4096 | FullScreen
        };

        virtual const std::string &title() const = 0;
        virtual void title(const std::string &) = 0;
        virtual size_t width() const = 0;
        virtual void width(size_t) = 0;
        virtual size_t height() const = 0;
        virtual void height(size_t) = 0;
    };
}
