#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <vector>
#include "Product.h"

class Warehouse
{
    vector <Product> products;

public:
    /**
    *@brief Metoda wypisujaca na ekran przechowywane elementy
    *@return metoda nic nie zwraca
    */
    void Print();

    /**
    *@brief Metoda usuwajaca ostatni element ze struktury danych
    * Metoda usuwa ostatni element w magazynie, jesli magazyn jest pusty to wypisuje komunikat.
    *@return metoda nic nie zwraca
    */
    void Remove();

    /**
    *@brief Metoda dodaje element do magazynu 
    *@param [in] p Element ktory dodajemy
    *@return metoda nic nie zwraca
    */
    void Add(Product p);

    /**
    *@brief Metoda usuwajaca wszystko z magazynu 
    *@return metoda nic nie zwraca
    */
    void Clear();
    
    /**
    *@brief konstruktor bezargumentowy
    */
    Warehouse();

    /**
    *@brief Konstruktor jednoargumentowy
    *@param [in] p1 Obiekt klasy Product ktory dodajemy do magazynu
    */
    Warehouse(Product p1);

    /**
    *@brief Konstruktor dwuargumentowy
    *@param [in] p1 Pierwszy obiekt klasy Product ktory dodajemy do magazynu
    *@param [in] p2 Drugi obiekt klasy Product ktory dodajemy do magazynu
    */
    Warehouse(Product p1, Product p2);
    
    /**
    *@brief Konstruktor dwuargumentowy
    *@param [in] size Dlugosc przekazywanej tablicy 
    *@param [in] tab Tablica wskaznikow na elementy typu Product 
    */
    Warehouse(int size, Product** tab);
    
    /**
    *@brief Konstruktor jednoargumentowy
    *@param [in] v Wektor elementow, ktore dodajemy do magazynu
    */
    Warehouse(const vector<Product> &v);
    
    /**
    *@brief Konstruktor kopiujacy
    *@param [in] wh Obiekt typu Warehouse, z ktorego kopiujemy wartosci magazynu
    */
    Warehouse(const Warehouse &wh);

    /**
    *@brief Konstruktor przenoszacy
    *@param [in] w Obiekt typu Warehouse, z ktorego przenosimy wartosci
    */
    Warehouse(Warehouse &&w);

    /**
    *@brief Operator konwertujacy na typ int
    *@return Operator zwraca sume wartosci zmiennej amount w produktach przechowywanych przez vector products
    */
    operator int() const;
};


#endif