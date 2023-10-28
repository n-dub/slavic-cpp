#pragma once
#include "Языкъ.h"
#include "Потокъ.h"
#include <string>

namespace Русь
{
    template<class T, class TTraits = std::char_traits<T>, class TAlloc = std::allocator<T>>
    class строка_базированная : std::basic_string<T, TTraits, TAlloc>
    {
    public:
        using база = std::basic_string<T, TTraits, TAlloc>;

        база& в_базу()
        {
            return static_cast<база&>(*this);
        }

        const база& в_базу() const
        {
            return static_cast<const база&>(*this);
        }

        строка_базированная() : basic_string()
        {
        }

        explicit строка_базированная(const TAlloc& _Al) noexcept
            : basic_string(_Al)
        {
        }

        строка_базированная(const basic_string& _Right)
            : basic_string(_Right)
        {
        }

        строка_базированная(const basic_string& _Right, const TAlloc& _Al)
            : basic_string(_Right, _Al)
        {
        }

        строка_базированная(const basic_string& _Right, const size_type _Roff, const TAlloc& _Al = TAlloc())
            : basic_string(_Right, _Roff, _Al)
        {
        }

        строка_базированная(
            const basic_string& _Right, const size_type _Roff, const size_type _Count, const TAlloc& _Al = TAlloc())
            : basic_string(_Right, _Roff, _Count, _Al)
        {
        }

        строка_базированная(_In_reads_(_Count) const T* const _Ptr, const size_type _Count)
            : _Mypair(_Zero_then_variadic_args_t{}) {
            _Construct<_Construct_strategy::_From_ptr>(_Ptr, _Count);
        }

        строка_базированная(const T* const _Ptr, const size_type _Count, const TAlloc& _Al)
            : basic_string(_Ptr, _Count, _Al)
        {
        }

        строка_базированная(const T* const _Ptr)
            : basic_string(_Ptr)
        {
        }
    };

    using строка = строка_базированная<char>;

    template<class T, class TTraits, class TAlloc>
    inline потокъ& operator<<(потокъ& левый, const строка_базированная<T, TTraits, TAlloc>& правый)
    {
        return левый << правый.в_базу();
    }
}
