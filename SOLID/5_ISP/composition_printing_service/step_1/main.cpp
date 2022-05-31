#include <iostream>

#include "core/PhotoApp.h"
#include "core/ShopApp.h"
#include "core/PayrollApp.h"


#include "PrintingService.h"


int main()
{
    PrintingService* service = new PrintingService();

    PhotoApp app1;
    app1.print(service);

    PayrollApp app2;
    app2.print(service);

    ShopApp app3;
    app3.print(service);

    delete service;
    return 0;
}
