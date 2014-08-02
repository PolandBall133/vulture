#pragma once

#include <list>

namespace vulture{
    namespace input{
        namespace devices{
            template<typename T>
            class Manager{
                friend class Factory;
            private:
                typedef T managed_type;
                typedef std::list<T> container_type;
                container_type _storage;

                class Factory{
                private:
                    Manager &_manager;
                public:
                    Factory(Manager &);
                    T &create();
                };

                Factory _factory;
            public:
                typedef container_type iterator;
                Factory &factory();
                iterator begin();
                iterator end();
            };

            template<typename T>
            Manager<T>::Factory::Factory(Manager &manager):
                _manager(manager){}

            template<typename T>
            T&
            Manager<T>::Factory::create(){
                _manager._storage.push_back(T());
                return _manager.storage.back();
            }

            template<typename T>
            typename Manager<T>::iterator
            Manager<T>::begin(){
                return _storage.begin();
            }

            template<typename T>
            typename Manager<T>::iterator
            Manager<T>::end(){
                return _storage.end();
            }

        }
    }
}
