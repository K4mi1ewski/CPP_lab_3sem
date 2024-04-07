#include "Product.h"

Product::Product(int a, int b): type(a), card(b){}

Product& Product::operator++()
{
    ++card;
    return *this;
}

Product Product::operator++(int)
{
    Product p = *this;
    card++;
    return p;
}

Product& Product::operator--()
{
    if (card > 0)
    {
        --card;
    }
    return *this;
}

Product Product::operator--(int)
{
    Product p = *this;
    if (card > 0)
    {
        card--;
    }
    return p;
}

Product Product::operator+(int n)
{
    card+=n;
    return *this;
}

Product Product::operator-(int n)
{
    if((card - n) >= 0)
    {
        card-=n;
    }
    else
    {
        card=0;
    }
    return *this;
}

Product Product::operator*(int n)
{
    card*=n;
    return *this;
}

ostream& operator<< (ostream& o, const Product& prod)
{
    o << "typ: " << prod.type << ", ilosc sztuk: " << prod.card << endl;
    return o;
}