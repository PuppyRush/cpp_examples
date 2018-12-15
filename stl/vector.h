//
// Created by chaed on 18. 12. 14.
//

#ifndef CPP_EXAMPLES_VECTOR_H
#define CPP_EXAMPLES_VECTOR_H

#include "../Common/headers.h"

void ary(){

    std::vector<int> a;
    a.push_back(3);
    a.shrink_to_fit();

}

#endif //CPP_EXAMPLES_VECTOR_H

