#include "Warehouse.h"

void Warehouse::Remove()
{   
    if (container.empty())
        cout << "BLAD: Pusto!" << endl;
    else
        container.pop_back();
}

void Warehouse::Add(const Product& p)
{
    container.push_back(p);
}

void Warehouse::Clear()
{
    container.clear();
}

Product& Warehouse::operator[](int n)
{
    return container[n];
}

Product Warehouse::operator[](int n) const
{
    return container[n];
}

Warehouse Warehouse::operator+ (int n)
{
    for (Product& el: container)
    {
        el = el + n;
    }
    return *this;
}

Warehouse Warehouse::operator-(int n)
{
     for (Product& el: container)
     {
        el = el - n;
     }
    return *this;
}

Warehouse Warehouse::operator*(int n)
{
     for (Product& el: container)
    {
        el = el * n;
    }
    return *this;
}

ostream& operator<<(ostream& o, const Warehouse& w)
{
    o << "---"<<endl;
    o<< "#Zawartosc/sklad:"<<endl;
    for (auto el: w.container)
        o << el;
    o << "---"<<endl;
    return o;
}