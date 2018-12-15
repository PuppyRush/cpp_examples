//
// Created by chaed on 18. 12. 8.
//

#ifndef CPP_EXAMPLES_SMATER_POINTER_H
#define CPP_EXAMPLES_SMATER_POINTER_H

//
// Created by chaed on 18. 12. 8.
//

#include "../Common/headers.h"

std::unique_ptr<Widget> uniquepointer()
{

    std::unique_ptr<Widget> wg = std::make_unique<Widget>();
    return wg;

}

std::shared_ptr<Widget> sharedpointer()
{

    std::shared_ptr<Widget> wg = std::make_shared<Widget>();
    const auto cnt = wg.use_count();
    return wg;

}

void ref(SHR_WDG& ref)
{
    int cnt = ref.use_count();
    if(cnt==0)
        cnt += 0 ;

}

void raw(SHR_WDG raw)
{
    int cnt = raw.use_count();
    if(cnt==0)
        cnt += 0 ;

}

void widget_ref(Widget& ref)
{
    int cnt = ref.number;
    if(cnt==0)
        cnt = 0;
}


#endif //CPP_EXAMPLES_SMATER_POINTER_H
