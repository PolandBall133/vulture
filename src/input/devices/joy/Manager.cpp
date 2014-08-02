#include "input/devices/joy/Manager.hpp"
using namespace std;

namespace vulture{
    namespace input{
        namespace devices{
            namespace joys{
                Manager::Requestor::Requestor(Manager &m):
                    _m(m){}

                Manager::container_type &
                Manager::Requestor::all(){
                    return _m._storage;
                }

                const Manager::container_type &
                Manager::Requestor::all() const{
                    return _m._storage;
                }

                Manager::Manager(){
                    _requestor = make_shared<Requestor>(*this);
                }
            }
        }
    }
}
