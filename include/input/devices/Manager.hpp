#pragma once

#include "input/devices/joy/Joy.hpp"
#include <memory>
#include <list>

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                template<class Type>
                class Manager{
                    friend class Requestor;
                    friend class EventsPoller;
                public:
                    typedef Type managed_type;
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
                    container_type _storage;
                    std::shared_ptr<Requestor> _requestor;
                public:
                    Manager();
                    Requestor &request();
                    const Requestor &request() const;
                };

                template<class T>
                Manager<T>::Requestor::Requestor(Manager &m):
                    _m(m){}

                template<class T>
                typename Manager<T>::container_type &
                Manager<T>::Requestor::all(){
                    return _m._storage;
                }

                template<class T>
                const typename Manager<T>::container_type &
                Manager<T>::Requestor::all() const{
                    return _m._storage;
                }
            }
        }
    }
}
