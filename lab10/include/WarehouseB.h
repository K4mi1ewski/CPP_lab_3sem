#ifndef WAREHOUSEB_H
#define WAREHOUSEB_H
#include "Product.h"
class WarehouseB
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
    WarehouseB();
    

     /**
    *@brief Konstruktor kopiujacy
    */
    WarehouseB(const WarehouseB& other);
    

    /**
    *@brief Kopiujacy operator przypisania
    */
    WarehouseB& operator= (const WarehouseB& other);


/**
    *@brief Destruktor
    */
    ~WarehouseB();
};

#endif