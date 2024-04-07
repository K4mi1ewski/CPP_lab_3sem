#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
    friend ostream& operator<<(ostream& o, const Product& prod);
    
    int type;
    int card;

    public:
    Product (int a, int b);
    Product& operator++();
    Product operator++(int);
    Product& operator--();
    Product operator--(int);
    Product operator+(int n);
    Product operator-(int n);
    Product operator*(int n);


};

ostream& operator<<(ostream& o, const Product& prod);

#endif