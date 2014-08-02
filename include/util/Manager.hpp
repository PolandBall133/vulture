#pragma once

#include <list>

namespace vulture{
    template<typename T>
    class Manager : public std::list<T>{
        friend class Factory;
    private:
        class Factory{
        private:
            Manager &_manager;
        public:
            Factory(Manager &);
            T &create();
        };

        Factory _factory;
    public:
        Manager();
        Factory &factory();
    };

    template<typename T>
    Manager<T>::Manager():
        _factory(*this){}

    template<typename T>
    Manager<T>::Factory::Factory(Manager &manager):
        _manager(manager){}

    template<typename T>
    T &
    Manager<T>::Factory::create(){
        _manager.push_back(T());
        return _manager.back();
    }

    template<typename T>
    typename Manager<T>::Factory &
    Manager<T>::factory(){
        return _factory;
    }
}
