#include "events/FilterGroup.hpp"

using namespace std;
namespace vulture{
    namespace events{
        FilterGroup::FilterGroup(
            const string &name
        ): _name(name){}

        const string &
        FilterGroup::name() const{
            return _name;
        }

        FilterGroup &
        FilterGroup::add(shared_ptr<Filter> efptr){
            _filters.push_back(efptr);
            return *this;
        }

        bool
        FilterGroup::filter(const Event &events){
            if(!checkType(events))
                return false;
            for(auto &filter : _filters)
                if(filter->filter(events))
                    return true;
            return false;
        }
    }
}
