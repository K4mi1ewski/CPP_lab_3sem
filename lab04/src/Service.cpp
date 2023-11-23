#include "Service.h"
#include <iostream>
using namespace std;

void Service::Test(CoffeeMaker* maker_ptr, double l)
{
    cout << endl<<"##################################" << endl;
    cout<< "### Test serwisowy ###"<<endl;
    cout << endl << "1. Wsyp kawe do pelna:"<<endl;
    double amount = (*maker_ptr).get_capacity() - (*maker_ptr).get_coffee();
    maker_ptr->Reload(amount);
    cout << "2.Przebieg testowy: " << l <<" litry/litrow kawy"<<endl;
    (*maker_ptr).Start();
    (*maker_ptr).Make(l);
    (*maker_ptr).Stop();
    cout << "### Koniec testu serwisowego ###" << endl;
    cout << "##################################" << endl;
}

void Service::TestCopy(CoffeeMaker maker, double l)
{cout << endl<<"##################################" << endl;
    cout<< "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach###"<<endl;
cout << endl << "1. Wsyp kawe do pelna:"<<endl;
    double amount = maker.get_capacity() - maker.get_coffee();
    maker.Reload(amount);
    cout << "2.Przebieg testowy: " << l <<" litry/litrow kawy"<<endl;
    maker.Start();
    maker.Make(l);
    maker.Stop();
    cout << "### Koniec testu serwisowego ###" << endl;
    cout << "##################################" << endl;
}