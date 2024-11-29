//
// Created by Glog on 9/12/2024.
//

#include "MyPair.h"

namespace PairNS
{
    template <typename T1, typename T2>
    MyPair<T1, T2>::MyPair(T1 first, T2 second) : first(first), second(second) {}
    //* This is a template class, so the types need to be specified
    //* The variable on the outside of the parentheses is the object property, the one on the inside is the parameter being passed in

    template <typename T1, typename T2>
    T1 MyPair<T1, T2>::getFirst() const
    {
        return first;
    }

    template <typename T1, typename T2>
    T2 MyPair<T1, T2>::getSecond() const
    {
        return second;
    }

    template class MyPair<int, bool>;
    //* The compiler needs to know at compile time what types are going to be used in a template
    //* You would have to put this in for EVERY data type combination
    
}


