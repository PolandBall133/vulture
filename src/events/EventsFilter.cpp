#include "events/EventsFilter.hpp"

using namespace std;
namespace vulture{
    namespace events{
        EventsFilter::EventsFilter(
            const string &name
        ): _name(name){}

        const string &
        EventsFilter::name() const{
            return _name;
        }
    }
}
