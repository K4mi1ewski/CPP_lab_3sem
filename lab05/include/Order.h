#ifndef ORDER_H
#define ORDER_H

#include "Item.h"
class Order
{
    private:
    string name;
    Item* itemlist;
    int amount;

    public:
    void Presentation();
    void SetName(const string& string);
    void SetNewItems(int item_count, Item* items);
    void SetItem(int index, const string&  string, double pri, double quan);


    Item* GetItems();

    Order();
    Order(const string& string);
    Order(const string&  string, Item i1, Item i2, Item i3);
    Order(const string&  string, Item i1, Item i2, Item i3, Item i4);
    Order(const string&  string, int item_count, Item* items);

    ~Order();
};


#endif