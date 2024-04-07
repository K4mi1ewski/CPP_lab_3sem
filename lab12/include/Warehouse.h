#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "Product.h"
#include <vector>

class Warehouse
{
    friend ostream& operator<<(ostream& o, const Warehouse& w);
    vector<Product> container;

    public:
    //Warehouse();
    void Remove();
    void Add(const Product& p);
    void Clear();
    Product& operator[](int n);
    Product operator[](int n) const;
    Warehouse operator+(int n);
    Warehouse operator-(int n);
    Warehouse operator*(int n);

};
ostream& operator<<(ostream& o, const Warehouse& w);
#endif