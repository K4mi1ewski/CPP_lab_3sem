#ifndef SERVICE_H
#define SERVICE_H

#include "CoffeeMaker.h"

class Service{
public:
    void Test(CoffeeMaker* maker_ptr, double l);
    void TestCopy(CoffeeMaker maker, double l);

};




#endif