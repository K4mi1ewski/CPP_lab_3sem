#include "CoffeeMaker.h"
#include <iostream>
using namespace std;

void CoffeeMaker::SetID(int id)
{
    CoffeeMaker::ID = id;
}

void CoffeeMaker::SetState(bool st)
{
    CoffeeMaker::state=st;
}

void CoffeeMaker::SetCapacity(double cap)
{
    CoffeeMaker::capacity = cap;
}

void CoffeeMaker::SetConsumption(double con)
{
    CoffeeMaker::consumption = con;
}

void CoffeeMaker::SetCoffee(double cof)
{
    CoffeeMaker::coffee=cof;
}

void CoffeeMaker::Make(double litres)
{
    if (litres*CoffeeMaker::consumption < CoffeeMaker::coffee)
    {
    cout << endl<<"### Robienie kawy ###" << endl;
    CoffeeMaker::coffee -= litres*CoffeeMaker::consumption;
    if(litres>0 && CoffeeMaker::state==true)
    {
        cout << "Zrobiles " << litres << " litry/litrow kawy" << endl;
    }
    else if (litres > 0)
        cerr << "BLAD: Niepoprawna ilosc litrow" << endl;
    else
        cerr << "BLAD: Wlacz ekspres" << endl;
    }
    else
    {
        double amount = CoffeeMaker::coffee/CoffeeMaker::consumption;
        cout << "Zrobiles " << amount << " litry/litrow kawy"<<endl; 
    }
}

void CoffeeMaker::Start()
{   cout <<endl<< "### Uruchomienie ekspresu ###" << endl;
    if (CoffeeMaker::coffee>0)
    {
        state = true;
        cout << "Ekspres zostal wlaczony"<<endl;
    }
    else
        cout<< "BLAD: Brak kawy, wsyp" << endl;
}

void CoffeeMaker::Reload(double g)
{   cout<<endl<<"### Wsypywanie kawy ###" << endl;
    if(g > 0 && state == false)
    {
        if (g+CoffeeMaker::coffee>CoffeeMaker::capacity)
        {
            cout << "Wsypales " << CoffeeMaker::capacity - CoffeeMaker::coffee<< " gramow kawy" << endl;
            CoffeeMaker::coffee = CoffeeMaker::capacity;
        }
        else{
        cout << "Wsypales " << g << " gramow kawy" << endl;
        CoffeeMaker::coffee+=g;
        }
    }
    else if (g<0)
        cout <<"BLAD: Niepoprawna ilosc kawy do wsypania" << endl;
    else 
        cout<<"BLAD: Wylacz ekspres przed wsypaniem"<<endl;

}

void CoffeeMaker::Stop()
{   cout << endl<<"### Zatrzymanie ekspresu ###" <<endl;
    cout << "Ekspres zostal wylaczony"<<endl;
    CoffeeMaker::state=false;
}

void CoffeeMaker::Presentation()
{
    cout << endl <<"### Prezentacja ###"<<endl;
    cout<<"Identyfikator ekspresu: "<<CoffeeMaker::ID<<endl;
    if(CoffeeMaker::state)
        cout<<"Ekspres jest wlaczony "<<endl;
    else
        cout<<"Ekspres jest wylaczony "<<endl;
    cout<<"Pojemnosc ekspresu wynosi " << CoffeeMaker::capacity << " gramow" << endl;
    cout<<"Srednia wydajnosc wynosi "<<CoffeeMaker::consumption << " gramow/litr" <<endl;
    cout<<"W ekspresie jest " << CoffeeMaker::coffee << " gramow kawy" << endl;
}

double CoffeeMaker::get_capacity()
{
    return CoffeeMaker::capacity;
}

double CoffeeMaker::get_coffee()
{
    return CoffeeMaker::coffee;
}