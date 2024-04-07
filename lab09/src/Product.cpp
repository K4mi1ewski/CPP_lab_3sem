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

Product::Product (int t): type(t), amount(0){}

Product::operator int() const
{
    return type;
}

int Compare(const Product& p1, const Product& p2)
{
    if (p1.amount > p2.amount)
        return 1;
    else if (p1.amount < p2.amount)
        return -1;
    else
        return 0;
}

int Product::GetAmount()
{
    return amount;
}

string Product::ToString()
{
    return "<typ="+to_string(type)+", ilosc="+to_string(amount)+">";
}

Product::operator string()
{
    return ToString();
}