#pragma once

#include <cinttypes>
#include <string>
#include "Point.hpp"
#include "Rectangle.hpp"
#include "Size.hpp"

namespace vulture{
    //TODO: Mock (with googlemock?)
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

        Window(const std::string &, const Rectangle &, const Flags);

        virtual const std::string title() const = 0;
        virtual void title(const std::string &) = 0;

        virtual const Size size() const = 0;
        virtual void size(const Size &) = 0;

        virtual const Point position() const = 0;
        virtual void position(const Point &) = 0;

        struct Factory{
            virtual Window *create(const std::string &, const Rectangle &, const Flags) = 0;
            virtual ~Factory(){}
        };
    };
}
