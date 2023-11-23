#include "Warehouse_3.h"
#include <iostream>
using namespace std;
int Warehouse_3::Remove()
{
    if(Warehouse_3::amount==0)
    {       
        cout<<"BLAD: Obiekt pusty"<<endl;
        return 0;
    }
    int removed = Warehouse_3::container[amount-1];
    Warehouse_3::container[Warehouse_3::amount-1]=0;
    Warehouse_3::amount--;
    return removed;
}

bool Warehouse_3::IsEmpty()
{
    return (Warehouse_3::amount==0);
}

bool Warehouse_3::IsFull()
{
    return(Warehouse_3::amount==Warehouse_3::maxsize);
}

void Warehouse_3::Insert(int value)
{
    if (Warehouse_3::amount == Warehouse_3::maxsize)
    {
        maxsize+=4;
        int* new_container = new int [maxsize];
        for (int i = 0; i<Warehouse_3::amount;i++)
        {
            new_container[i] = Warehouse_3::container[i];
        }
        delete[]Warehouse_3::container;
        for(int i = Warehouse_3::amount;i<Warehouse_3::maxsize;i++)
        {
            new_container[i]=0;
        }
        
        Warehouse_3::container=new_container;
        
    }
    Warehouse_3::container[Warehouse_3::amount]=value;
    Warehouse_3::amount++;
}

void Warehouse_3::Print()
{
    cout << "Zawartosc obiektu:"<<endl;
    for(int i = 0;i<Warehouse_3::amount;i++)
    {
        cout << Warehouse_3::container[i]<<",";
    }   
    cout << endl;
}   

void Warehouse_3::Clear()
{
    Warehouse_3::amount=0;
    for (int i = 0; i<Warehouse_3::maxsize;i++)
    {
        Warehouse_3::container[i]=0;
    }
}
Warehouse_3::~Warehouse_3()
{
    if(Warehouse_3::container!=nullptr)
    {
    delete[]Warehouse_3::container;
    Warehouse_3::container=nullptr;
    }
}

Warehouse_3::Warehouse_3(int size)
{
    Warehouse_3::container = new int [size];
    Warehouse_3::maxsize=size;
    Warehouse_3::amount=0;
}

int Warehouse_3::Size()
{
    return Warehouse_3::amount;
}