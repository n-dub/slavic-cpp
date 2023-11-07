#pragma once
#include "Языкъ.hpp"
#include <iostream>

namespace Русь
{
    using потокъ = std::ostream;

    свой потокъ& молвить = std::cout;

    template <class T, class TTraits>
    std::basic_ostream<T, TTraits>& прыгъ_скокъ(std::basic_ostream<T, TTraits>& stream) {
        return std::endl(stream);
    }
}
