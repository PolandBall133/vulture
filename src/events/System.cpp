#include "events/System.hpp"

using namespace std;
namespace vulture{
    namespace events{
        void
        System::addFilters(shared_ptr<EventsFilterGroup> efgptr){
            _eventsFilterGroups.push_back(efgptr);
        }

        void
        System::handleEvent(const Events &events){
            for(auto &filterGroupptr : _eventsFilterGroups)
                if(filterGroupptr->filter(events))
                    return;
        }
    }
}
