#include "Warehouse.h"

void Warehouse::Print()
{   
    cout << "---"<<endl;
    cout << "#Zawartosc/sklad:"<<endl;
    
    for (auto element:products)
            element.Print();
    
    cout << "---" << endl;
}
void Warehouse::Remove()
{
    if(!products.empty())
        products.pop_back();
    else
        cout << "BLAD: Pusto!" << endl;
    
}

void Warehouse::Clear()
{
    if(!products.empty())
        products.clear();
}
void Warehouse::Add(Product p)
{
    products.push_back(p);
}

Warehouse::Warehouse()
{}

Warehouse::Warehouse(Product p1)
{
    products.push_back(p1);
}

Warehouse::Warehouse(Product p1, Product p2)
{
    products.push_back(p1);
    products.push_back(p2);
}

Warehouse::Warehouse(int size, Product** tab)
{
    for (int i = 0; i < size; i++)
    {
        products.push_back(*tab[i]);
    }
}

Warehouse::Warehouse(const vector<Product>& v)
{
    for (auto el: v)
    {
        products.push_back(el);
    }
}

Warehouse::Warehouse(const Warehouse &wh): products(wh.products)
{}

Warehouse::Warehouse(Warehouse &&w)
{
    products = move(w.products);
}
