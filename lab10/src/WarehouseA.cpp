#include "WarehouseA.h"

WarehouseA::WarehouseA()
{

    amount = 0;
}

void WarehouseA::Print()
{
    cout << "---" << endl;
    cout << "# Zawartosc/sklad: "<<endl;
    for (int i = 0; i<amount; i++)
    {
        tab[i].Print();
    }
    cout << "---" << endl;
}

void WarehouseA::Remove()
{
    if (amount == 0)
    {
        cout << "BLAD: Pusto!" << endl;
    }
    else
    {
        amount--;
    }
}

void WarehouseA::Add(Product& p)
{
    if (amount == size)
    {
        cout << "Tablica pelna"<<endl;
    }
    else
    {
        tab[amount] = p;
        amount++;
    }
}

void WarehouseA::Clear()
{
    if (amount == 0)
    {
        cout << "BLAD: Pusto!"<<endl;
    }
    else
    {
        amount = 0;
    }
}

WarehouseA::WarehouseA(const WarehouseA& other): amount(other.amount)
{
    int i;
    for (i = 0; i<other.amount;i++)
    {
        tab[i] = other.tab[i];
    }
    
}

WarehouseA& WarehouseA::operator=(const WarehouseA& other)
{
    amount = other.amount;
    int i;
    for (i = 0; i<other.amount;i++)
    {
        tab[i] = other.tab[i];
    }
    
    return *this;
}

WarehouseA::~WarehouseA(){}