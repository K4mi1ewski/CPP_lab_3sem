#include "Warehouse_1.h"
#include <iostream>

using namespace std;

Warehouse_1::Warehouse_1()
{
    amount = 0;
}

int Warehouse_1::Remove()
{
    if (Warehouse_1::amount == 0)
    {
        cout << "BLAD: Obiekt pusty"<<endl;
        return 0;
    }
    int removed = Warehouse_1::container[0];
    
    for (int i = 0; i<(amount-1);i++)
    {
        container[i] = container[i+1];
    }
    Warehouse_1::amount--;
    return removed;
}

bool Warehouse_1::IsEmpty()
{
    return (amount==0);
}

bool Warehouse_1::IsFull()
{
    return (amount==4);
}

void Warehouse_1::Insert(int value)
{
    if (amount == 4)
    {
        cout <<"BLAD: Obiekt zapelniony"<<endl;
        return;
    }
    Warehouse_1::container[Warehouse_1::amount]=value;
    amount++;
}

void Warehouse_1::Print()
{
    cout << "Zawartosc obiektu:"<<endl;
    for(int i = 0;i<Warehouse_1::amount;i++)
    {
        cout<< Warehouse_1::container[i]<<",";
    }
    cout << endl;
}   

void Warehouse_1::Clear()
{
    for(int i = 0; i<4;i++)
    {
        Warehouse_1::container[i] = 0;
    }
    Warehouse_1::amount=0;
}

int Warehouse_1::Size()
{
    return Warehouse_1::amount;
}
Warehouse_1::~Warehouse_1(){}