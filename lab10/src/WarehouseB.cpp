#include "WarehouseB.h"

WarehouseB::WarehouseB()
{
    size = 15;
    tab = new Product [size];
    amount = 0;
}

void WarehouseB::Print()
{
    cout << "---" << endl;
    cout << "# Zawartosc/sklad: "<<endl;
    for (int i = 0; i<amount; i++)
    {
        tab[i].Print();
    }
    cout << "---" << endl;
}

void WarehouseB::Remove()
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

void WarehouseB::Add(Product& p)
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

void WarehouseB::Clear()
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

WarehouseB::WarehouseB(const WarehouseB& other): amount(other.amount), size(other.size)
{
    int i;
    tab = new Product [size];
    if (amount < size)
    {
    for (i = 0; i<other.amount;i++)
    {
        tab[i] = other.tab[i];
    }
    }
    else
    {
    for (i = 0; i<other.size;i++)
    {
        tab[i] = other.tab[i];
    }
    }    
}

WarehouseB& WarehouseB::operator=(const WarehouseB& other)
{
    size = other.size;
    amount = other.amount;
    Product* newtab;
    newtab = new Product [size];
    for (int i = 0; i<amount; i++)
    {
        newtab[i] = other.tab[i];
    }
    delete [] tab;
    tab = newtab;
    return *this;
}

WarehouseB::~WarehouseB()
{
    delete[] tab;
}