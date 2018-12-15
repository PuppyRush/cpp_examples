//
// Created by chaed on 18. 12. 15.
//

#ifndef CPP_EXAMPLES_FACTORIAL_H
#define CPP_EXAMPLES_FACTORIAL_H


//generic metafunction calls (inherits from) it self
template<int IIn, int ISum=1>
struct Factorial : Factorial<IIn-1,IIn*ISum>
    {};

//specialized metafunction has a value and does not inherit
template<int ISum> //take ISum as a wild card
struct Factorial<1,ISum>{
    enum{ value = ISum };
};


template <int Row, int Col>
struct rect : rect<Row-1, Col-1>
{};

template<int Col>
struct rect<1,Col>{
    enum{ value = '*'};
};


#endif //CPP_EXAMPLES_FACTORIAL_H


