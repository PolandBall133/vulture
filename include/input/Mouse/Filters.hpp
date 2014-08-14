#pragma once

#include "events/FiltersGroup.hpp"

namespace vulture{
    namespace input{
        namespace mouse{
            class FiltersGroup:
                public events::FiltersGroup{
            public:
                FiltersGroup();
            protected:
                virtual bool checkType(const events::Event &) override;
            };

            VULTURE_DECLARE_FILTER(Button);
            VULTURE_DECLARE_FILTER(Motion);
            VULTURE_DECLARE_FILTER(Wheel);
        }
    }
}
