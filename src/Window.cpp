#include "Window.hpp"

namespace vulture{
    Window::Window(const std::string &title, const Rectangle &rect, const Flags flags):
        _title(title),
        _rect(rect),
        _flags(flags)
    {}
}
