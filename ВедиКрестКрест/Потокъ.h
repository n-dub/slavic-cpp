#pragma once
#include "�����.h"
#include <iostream>

namespace ����
{
    using ������ = std::ostream;

    ���� ������& ������� = std::cout;

    template <class T, class TTraits>
    std::basic_ostream<T, TTraits>& �����_�����(std::basic_ostream<T, TTraits>& stream) {
        return std::endl(stream);
    }
}
