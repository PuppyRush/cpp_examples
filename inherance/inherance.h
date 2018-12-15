//
// Created by chaed on 18. 12. 13.
//

#ifndef CPP_EXAMPLES_INHERANCE_H
#define CPP_EXAMPLES_INHERANCE_H

#include <iostream>

class parent
{
public:
    virtual void foo()
    {
        std::cout << "base foo\n";
    }


    void normal()
    {
        std::cout << "base normal\n";
    }

};


class child : public parent
{
public:
    void foo()
    {
        std::cout <<"child foo\n";
    }

    virtual void normal()
    {
        std::cout << "child parent\n";
    }

};

#endif //CPP_EXAMPLES_INHERANCE_H
