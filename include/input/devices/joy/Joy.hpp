#pragma once

#include "input/devices/Device.hpp"
#include <string>

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                class Joy:
                    public input::devices::Device{
                public:
                    const std::string &name() const;
                protected:
                    void name(const std::string &);
                private:
                    std::string _name;
                };
            }
        }
    }
}
