#ifndef WAREHOUSEC_H
#define WAREHOUSEC_H
#include <utility>
#include <iostream>
#include "Product.h"
using namespace std;
class WarehouseC
{
    private:
    int size;
    Product* tab;
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
    WarehouseC();

     /**
    *@brief Konstruktor kopiujacy
    */
    WarehouseC(const WarehouseC& other);
    
    /**
    *@brief Konstruktor przenoszacy
    */
    WarehouseC (WarehouseC&& other);
    
    /**
    *@brief Kopiujacy operator przypisania
    */
    WarehouseC& operator= (const WarehouseC& other);
    
    /**
    *@brief Przenoszacy operator przypisania
    */
    WarehouseC& operator= (WarehouseC&& other);

/**
    *@brief Destruktor
    */
    ~WarehouseC();
};

#endif