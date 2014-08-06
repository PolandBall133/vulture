#include "events/FilterGroup.hpp"

using namespace std;
namespace vulture{
    namespace events{
        FiltersGroup::FiltersGroup(
            const string &name
        ): _name(name){}

        const string &
        FiltersGroup::name() const{
            return _name;
        }

        FiltersGroup &
        FiltersGroup::add(shared_ptr<Filter> efptr){
            _filters.push_back(efptr);
            return *this;
        }

        bool
        FiltersGroup::filter(const Event &events){
            if(!checkType(events))
                return false;
            for(auto &filter : _filters)
                if(filter->filter(events))
                    return true;
            return false;
        }
    }
}
