#include "events/System.hpp"

using namespace std;
namespace vulture{
    namespace events{
        void
        System::addFilters(weak_ptr<FiltersGroup> efgptr){
            _filtersGroups.push_back(efgptr);
        }

        void
        System::handleEvent(const Event &event){
            for(auto it = _filtersGroups.begin(); it != _filtersGroups.end(); ++it){
                if(it->expired())
                    _filtersGroups.erase(it);
                else if(it->lock()->filter(event))
                    return;
            }
        }
    }
}
