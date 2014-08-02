#pragma once

#include "input/Device.hpp"
#include "input/IEventHandler.hpp"
#include <string>

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                class Joy:
                    public input::devices::Device,
                    public input::devices::IEventHandler{
                public:
                    const std::string &name() const;
                    bool connected() const;

                    virtual void onAdded() override;
                    virtual void onRemoved() override;
                protected:
                    void name(const std::string &);
                    void connected(bool);
                private:
                    std::string _name;
                    bool _connected;
                };
            }
        }
    }
}
