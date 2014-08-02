#pragma once

#include "input/devices/joy/Joy.hpp"
#include <memory>
#include <list>

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                class Manager{
                    friend class Requestor;
                public:
                    typedef Joy managed_type;
                    typedef std::shared_ptr<managed_type> pointer_type;
                    typedef std::list<pointer_type> container_type;
                private:
                    class Requestor{
                    private:
                        Manager &_m;
                    public:
                        Requestor(Manager &);
                        Manager::container_type &all();
                        const Manager::container_type &all() const;
                    };
                public:
                    Manager();
                    Requestor &request();
                    const Requestor &request() const;
                private:
                    container_type _storage;
                    std::shared_ptr<Requestor> _requestor;
                };
            }
        }
    }
}
