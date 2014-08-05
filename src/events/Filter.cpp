#include "events/Filter.hpp"

using namespace std;
namespace vulture{
    namespace events{
        Filter::Filter(
            const string &name
        ): _name(name){}

        const string &
        Filter::name() const{
            return _name;
        }
    }
}
