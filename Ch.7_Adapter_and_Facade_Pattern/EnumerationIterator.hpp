#pragma once

#include "Enumeration.hpp"
#include "Iterator.hpp"

template <typename _Tp>
class EnumerationIterator : Iterator<_Tp>
{
    Enumeration<_Tp> *m_enumeration;

public:
    EnumerationIterator(Enumeration<_Tp> *enumeration)
    {
        m_enumeration = enumeration;
    }
    bool hasNext() override
    {
        m_enumeration->hasMoreElements();
    }
    _Tp *next() override
    {
        return m_enumeration->nextElement();
    };
    void remove() override
    {
        throw - 1;
    }
};