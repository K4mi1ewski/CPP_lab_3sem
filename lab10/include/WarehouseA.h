#ifndef WAREHOUSEA_H
#define WAREHOUSEA_H
#include <iostream>
#include "Product.h"
using namespace std;
class WarehouseA
{
    private:
    const static int size = 15;
    Product tab [size];
    int amount;
    
    public:

    /**
    *@brief Metoda wypisuje zawartosc tablicy
    *@return metoda nic nie zwraca
    */
    void Print();

    /**
    *@brief Metoda usuwa ostatni element z tablicy
    *@return metoda nic nie zwraca
    */
    void Remove();

    /**
    *@brief Metoda dodaje produkt do tablicy
    *@param [in] Produkt do dodania
    *@return Metoda nic nie zwraca
    */
    void Add(Product& p);
    
    /**
    *@brief Metoda czysci kontener
    *@return Metoda nic nie zwraca
    */
    void Clear();

    /**
    *@brief Konstruktor bezargumentowy
    */
    WarehouseA();

    /**
    *@brief Konstruktor kopiujacy
    */
    WarehouseA(const WarehouseA& other);
    
    /**
    *@brief Kopiujacy operator przypisania
    */
    WarehouseA& operator= (const WarehouseA& other);

    /**
    *@brief Destruktor
    */
    ~WarehouseA();
};

#endif