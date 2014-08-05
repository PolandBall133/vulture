#include "events/System.hpp"

using namespace std;
namespace vulture{
    namespace events{
        void
        System::addFilters(shared_ptr<EventsFilterGroup> efgptr){
            _eventsFilterGroups.push_back(efgptr);
        }
    }
}
