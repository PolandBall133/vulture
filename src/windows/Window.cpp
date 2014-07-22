#include "windows/Window.hpp"

namespace vulture{
    Window::Window(const std::string &title, const Rectangle &rect, const Flags flags){}

    void
    Window::onClosed(const WindowEvent::Closed &){
        closed(true);
    }

    bool
    Window::closed() const{
        return _closed;
    }

    void
    Window::closed(bool val){
        _closed = val;
    }
}
