#include "holiday.h"


namespace YooSeoyoung2693186
{
    bool compareDayOfYear(const dayOfYear& d1, const dayOfYear& d2)
    {
        return(d1.getDay()==d2.getDay()) && (d1.getMonth()==d2.getMonth());
    }
}
int main()
{
    using namespace YooSeoyoung2693186;
    holiday h1; h1.print();
    holiday h2{dayOfYear{12,25}, true}; h2.print();
    if (compareDayOfYear(h1.getDate(),h2.getDate()))
        std::cout<<"same\n";
    else
        std::cout<<"not same\n";
    return 0;
}