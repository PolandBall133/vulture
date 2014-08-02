#pragma once

namespace vulture{
    namespace input{
        namespace devices{
            struct Button{
                enum State{ Up, Down };
                State state;
            };
        }
    }
}
