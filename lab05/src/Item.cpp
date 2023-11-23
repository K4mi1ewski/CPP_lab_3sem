#include "Item.h"
#include <iostream>


Item::Item()
{
    cout << "Wywolanie konstruktora Item..."<<endl;

    Item::price=0;
    Item::quantity=0;
    Item::name="";
}

Item::Item(const string& string)
{
    cout << "Wywolanie konstruktora Item..."<<endl;
    Item::name=string;
    Item::price=0;
    Item::quantity=0;
}

Item::Item(const string& string, double pri, double quan)
{
    cout << "Wywolanie konstruktora Item..."<<endl;
    Item::name=string;
    Item::price=pri;
    Item::quantity=quan;
}

Item::~Item()
{
    cout << "Wywolanie destruktora Item..."<<endl;
}

void Item::Presentation()
{
    cout << "### Prezentacja pozycji zamowienia ###"<<endl;
    cout << "Nazwa: " << Item::name<<endl;
    cout << "Cena: " << Item::price<<endl;
    cout << "Ilosc: " << Item::quantity<<endl;
}

void Item::SetName(const string& string)
{
    Item::name=string;
}

void Item::SetPrice(double pri)
{
    Item::price=pri;
}

void Item::SetQuantity(double quan)
{
    Item::quantity=quan;
}

string Item::GetName()
{
    return Item::name;
}

double Item::GetPrice()
{
    return Item::price;
}

double Item::GetQuantity()
{
    return Item::quantity;
}