#pragma once

#include "input/devices/joy/Joy.hpp"
#include <memory>
#include <map>

namespace vulture{
    namespace input{
        namespace devices{
            template<class Type>
            class Manager{
                friend class Requestor;
                friend class EventsPoller;
            public:
                typedef Type managed_type;
                typedef std::shared_ptr<managed_type> pointer_type;
                typedef std::map<uint32_t, pointer_type> container_type;
            private:
                class Requestor{
                private:
                    Manager &_m;
                public:
                    Requestor(Manager &);
                    Manager::container_type &all();
                    const Manager::container_type &all() const;
                    Manager::pointer_type byID(uint32_t);
                    const Manager::pointer_type byID(uint32_t) const;
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

            template<class T>
            typename Manager<T>::pointer_type
            Manager<T>::Requestor::byID(uint32_t id){
                return _m._storage.count(id)?
                    _m._storage[id] : nullptr;
            }

            template<class T>
            const typename Manager<T>::pointer_type
            Manager<T>::Requestor::byID(uint32_t id) const{
                return _m._storage.count(id)?
                    _m._storage[id] : nullptr;
            }
        }
    }
}
