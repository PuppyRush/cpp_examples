//
// Created by chaed on 18. 12. 14.
//

#ifndef CPP_EXAMPLES_REFERENCE_H
#define CPP_EXAMPLES_REFERENCE_H

#include "../Common/headers.h"

int ref()
{
    int a = 3;
    int& r{a};
    r++;

    std::cout << a << " " << r;

}

int rval()
{

    int l{3};
    int& lval = l;
    int&& tmp = std::move(lval);
    int&& tmp2 = static_cast<int&&>(lval);
    int&& tmp3 = std::move(l);

}

template <class T>
void swaps(T& a, T& b)
{
    T tmp = static_cast<T&&>(a);
    a = static_cast<T&&>(b);
    b = static_cast<T&&>(tmp);
}


#endif //CPP_EXAMPLES_REFERENCE_H
