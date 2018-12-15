#include "Common/headers.h"

#include "pointer/smater_pointer.h"
#include "ctor_dtor/ctor.h"
#include "inherance/inherance.h"
#include "ptr_ary_ref/reference.h"

std::shared_ptr<Widget> wgg;


int main() {

    /*auto wg = uniquepointer();
    wg->number = 3;

    auto w = sharedpointer();
    wgg = w;
    w->number = wg->number;
    auto cnt = w.use_count();
    if(cnt==0)
        cnt += 0;

    ref(w);
    raw(w);

    Widget widget;
    Widget widget2 = widget;
    Widget widget3;
    widget3 = widget2;

    widget_ref(widget);

    ctor_foo f{3};
    ctor ct(f);

*/

    ref();

    Widget w1,w2;
    swaps(w1,w2);

}