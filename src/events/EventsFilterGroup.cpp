#include "events/EventsFilterGroup.hpp"

using namespace std;
namespace vulture{
    namespace events{
        EventsFilterGroup::EventsFilterGroup(
            const string &name
        ): _name(name){}

        const string &
        EventsFilterGroup::name() const{
            return _name;
        }

        EventsFilterGroup &
        EventsFilterGroup::add(shared_ptr<EventsFilter> efptr){
            _eventsFilters.push_back(efptr);
            return *this;
        }
    }
}
