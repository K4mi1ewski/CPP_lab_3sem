#include "Order.h"
#include<iostream>
Order::Order()
{
    cout << "Wywolanie konstruktora Order..."<<endl;
    Order::name="";
    Order::itemlist=nullptr;
    Order::amount = 0;
}

Order::Order(const string& string)
{
    cout << "Wywolanie konstruktora Order..."<<endl;
    Order::name=string;
    Order::itemlist=nullptr;
    Order::amount=0;
}

Order::Order(const string&  string, Item i1, Item i2, Item i3)
{
    cout << "Wywolanie konstruktora Order..."<<endl;
    Order::name=string;
    Order::itemlist=new Item[3];
    Order::amount=3;

    Order::itemlist[0]=i1;
    Order::itemlist[1]=i2;
    Order::itemlist[2]=i3;
}

Order::Order(const string&  string, Item i1, Item i2, Item i3, Item i4)
{
    cout << "Wywolanie konstruktora Order..."<<endl;
    Order::name=string;
    Order::itemlist=new Item[4];
    Order::amount=4;

    Order::itemlist[0]=i1;
    Order::itemlist[1]=i2;
    Order::itemlist[2]=i3;
    Order::itemlist[3]=i4;
}

Order::Order(const string&  string, int item_count, Item* items)
{
    cout << "Wywolanie konstruktora Order..."<<endl;
    Order::name=string;
    Order::amount=item_count;
    Order::itemlist=new Item[item_count];

    for(int i = 0;i<item_count;i++)
    {
        Order::itemlist[i]=items[i];
    }
}

Order::~Order()
{
    cout << "Wywolanie destruktora Order..."<<endl;
    if(Order::itemlist!=nullptr)
        {
        delete[]Order::itemlist;
        Order::itemlist=nullptr;
        }
}

Item* Order::GetItems()
{
    return Order::itemlist;
}

void Order::Presentation()
{
    cout<<"### Prezentacja zamowienia ###" << endl;
    cout << "Nazwa: " << Order::name << endl;
    cout << "Liczba pozycji: " << Order::amount << endl;
    for(int i = 0; i<Order::amount;i++)
    {
        cout << "Pozycja - nazwa: "<<(itemlist+i)->GetName() << ", cena = " << (itemlist+i) -> GetPrice() << ", ilosc = " << (itemlist+i)->GetQuantity() << endl;
    }
}

void Order::SetName(const string& string)
{
    Order::name=string;
}

void Order::SetNewItems(int item_count, Item* items)
{
    Order::amount=item_count;
    delete[]Order::itemlist;
    Order::itemlist= new Item[item_count];
    for (int i = 0; i<item_count;i++)
    {
        Order::itemlist[i]=items[i];
    }
    
}

void Order::SetItem(int index, const string& string, double pri, double quan)
{
if(index<Order::amount)
{
    Order::itemlist[index].SetName(string);
    Order::itemlist[index].SetPrice(pri);
    Order::itemlist[index].SetQuantity(quan);
}
}