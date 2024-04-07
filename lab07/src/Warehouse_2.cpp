#include "Warehouse_2.h"
#include <iostream>
int Warehouse_2::Remove()
{
    if(Warehouse_2::amount==0)
    {       
        cout<<"BLAD: Obiekt pusty"<<endl;
        return 0;
    }
    int removed = container[0];
    for (int i = 0; i<(amount-1);i++)
    {
        container[i] = container[i+1];
    }
    Warehouse_2::amount--;
    return removed;
    
}

bool Warehouse_2::IsEmpty()
{
    return (Warehouse_2::amount==0);
}

bool Warehouse_2::IsFull()
{
    return(Warehouse_2::amount==4);
}

void Warehouse_2::Insert(int value)
{
    if (amount == 4)
    {
        cout << "BLAD: Obiekt zapelniony"<<endl;
        return;
    }
    Warehouse_2::container[Warehouse_2::amount]=value;
    Warehouse_2::amount++;
}

void Warehouse_2::Print()
{
    cout << "Zawartosc obiektu:"<<endl;
    for(int i=0;i<Warehouse_2::amount;i++)
    {
        cout<< Warehouse_2::container[i]<<",";
    }
    cout << endl;
}   

void Warehouse_2::Clear()
{
    Warehouse_2::container.fill(0);
    Warehouse_2::amount=0;
}
Warehouse_2::~Warehouse_2(){}

Warehouse_2::Warehouse_2()
{
    amount=0;
    Warehouse_2::container.fill(0);
}
int Warehouse_2::Size()
{
    return Warehouse_2::amount;
}