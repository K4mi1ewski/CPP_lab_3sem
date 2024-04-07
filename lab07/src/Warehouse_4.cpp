#include "Warehouse_4.h"
#include <iostream>

int Warehouse_4::Remove()
{
    if(Warehouse_4::container.empty())
    {       
        cout<<"BLAD: Obiekt pusty"<<endl;
        return 0;
    }
    int removed = *container.begin();
    container.erase(container.begin());
    return removed;
}

bool Warehouse_4::IsEmpty()
{
    return (Warehouse_4::container.empty());
}

bool Warehouse_4::IsFull()
{
    return false;
}

void Warehouse_4::Insert(int value)
{
    Warehouse_4::container.push_back(value);
}

void Warehouse_4::Print()
{
    cout << "Zawartosc obiektu:"<<endl;
    for(auto i = Warehouse_4::container.begin();i<Warehouse_4::container.end();i++)
    {
        cout << *i<< ",";
    }   
    cout << endl;
}   

void Warehouse_4::Clear()
{
    Warehouse_4::container.clear();
}
Warehouse_4::~Warehouse_4()
{}

Warehouse_4::Warehouse_4()
{}

int Warehouse_4::Size()
{
    return Warehouse_4::container.size();
}