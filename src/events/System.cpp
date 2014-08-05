#include "events/System.hpp"

using namespace std;
namespace vulture{
    namespace events{
        void
        System::addFilters(shared_ptr<FilterGroup> efgptr){
            _filterGroups.push_back(efgptr);
        }

        void
        System::handleEvent(const Event &event){
            for(auto &filterGroupPtr : _filterGroups)
                if(filterGroupPtr->filter(event))
                    return;
        }
    }
}
