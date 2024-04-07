#include "WarehouseC.h"

WarehouseC::WarehouseC()
{
    size = 15;
    tab = new Product [size];
    amount = 0;
}

void WarehouseC::Print()
{
    cout << "---" << endl;
    cout << "# Zawartosc/sklad: "<<endl;
    for (int i = 0; i<amount; i++)
    {
        tab[i].Print();
    }
    cout << "---" << endl;
}

void WarehouseC::Remove()
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

void WarehouseC::Add(Product& p)
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

void WarehouseC::Clear()
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

WarehouseC::WarehouseC(const WarehouseC& other): amount(other.amount), size(other.size)
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

WarehouseC& WarehouseC::operator=(const WarehouseC& other)
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
    newtab=nullptr;
    return *this;
}

WarehouseC::WarehouseC (WarehouseC&& other)
{
    amount = exchange(other.amount, 0);
    size = exchange(other.size, 0);
   
    tab = exchange(other.tab, nullptr);
}


WarehouseC& WarehouseC::operator= (WarehouseC&& other)
{
    if (this != &other) {
        size = exchange(other.size, 0);
        amount = exchange(other.amount, 0);
        delete[] tab;
        tab = exchange(other.tab, nullptr);
    }
    return *this;

}

WarehouseC::~WarehouseC()
{
    delete[] tab;
}