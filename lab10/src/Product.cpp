#include "Product.h"



Product::Product(int t, int a): type(t), amount(a)
{}

void Product::Print()
{
    cout << "typ: " << type << ", ilosc sztuk: " << amount << endl;
}

void Product::SetCard(int card)
{
    amount = card;
}


Product::Product(const Product& prod): type(prod.type), amount(prod.amount)
{}

Product::Product (Product&& p)
{
    type = move(p.type);
    amount = move(p.amount);
}

Product::Product(): type(0),amount(0){}

Product& Product::operator= (const Product& other)
    {
    amount = other.amount;
    type = other.type;
    return *this;

    }