#pragma once
#include "�����.h"
#include "������.h"
#include <string>

namespace ����
{
    template<class T, class TTraits = std::char_traits<T>, class TAlloc = std::allocator<T>>
    class ������_������������ : std::basic_string<T, TTraits, TAlloc>
    {
    public:
        using ���� = std::basic_string<T, TTraits, TAlloc>;

        ����& �_����()
        {
            return static_cast<����&>(*this);
        }

        const ����& �_����() const
        {
            return static_cast<const ����&>(*this);
        }

        ������_������������() : basic_string()
        {
        }

        explicit ������_������������(const TAlloc& _Al) noexcept
            : basic_string(_Al)
        {
        }

        ������_������������(const basic_string& _Right)
            : basic_string(_Right)
        {
        }

        ������_������������(const basic_string& _Right, const TAlloc& _Al)
            : basic_string(_Right, _Al)
        {
        }

        ������_������������(const basic_string& _Right, const size_type _Roff, const TAlloc& _Al = TAlloc())
            : basic_string(_Right, _Roff, _Al)
        {
        }

        ������_������������(
            const basic_string& _Right, const size_type _Roff, const size_type _Count, const TAlloc& _Al = TAlloc())
            : basic_string(_Right, _Roff, _Count, _Al)
        {
        }

        ������_������������(_In_reads_(_Count) const T* const _Ptr, const size_type _Count)
            : _Mypair(_Zero_then_variadic_args_t{}) {
            _Construct<_Construct_strategy::_From_ptr>(_Ptr, _Count);
        }

        ������_������������(const T* const _Ptr, const size_type _Count, const TAlloc& _Al)
            : basic_string(_Ptr, _Count, _Al)
        {
        }

        ������_������������(const T* const _Ptr)
            : basic_string(_Ptr)
        {
        }
    };

    using ������ = ������_������������<char>;

    template<class T, class TTraits, class TAlloc>
    inline ������& operator<<(������& �����, const ������_������������<T, TTraits, TAlloc>& ������)
    {
        return ����� << ������.�_����();
    }
}
