//
// Created by chaed on 18. 12. 11.
//

#ifndef CPP_EXAMPLES_CTOR_H
#define CPP_EXAMPLES_CTOR_H

class ctor_foo
{
public:
    int i;

    ctor_foo()
    {}

    ctor_foo(int a)
    :i(a){}

    ctor_foo(const ctor_foo& f)
    {
        this->i = f.i;
    }

    ctor_foo& operator=(const ctor_foo& f)
    {
        this->i = f.i;
        return *this;
    }
};

class ctor
{
public:

    ctor_foo f = ctor_foo();

    // :에서 비용 차이가 있나?
    ctor(ctor_foo f)
    {
    }


    ~ctor()
    {
        throw 100;
    }

};

#endif //CPP_EXAMPLES_CTOR_H
