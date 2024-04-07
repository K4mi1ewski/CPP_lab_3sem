#ifndef PRODUCT_H
#define PRODUCT_H

#include <utility>
#include <iostream>
using namespace std;

class Product
{
    int type;
    int amount;

    public:
    /**
    *@brief Konstruktor dwuargumentowy
    *@param [in] t Wartosc, za pomoca ktorej inicjalizujemy zmienna 'type'
    *@param [in] a Wartosc, za pomoca ktorej inicjalizujemy zmienna 'amount'
    */
    Product(int t, int a);
    
    /**
    *@brief Konstruktor kopiujacy
    *@param [in] prod Obiekt typu Product, z ktorego wartosci kopiujemy
    */
    Product(const Product& prod);
    
    /**
    *@brief Konstruktor przenoszacy
    *@param [in] p Obiekt typu Product, z ktorego przenosimy wartosci
    */
    Product (Product&& p);
    
    /**
    *@brief Konstruktor bezargumentowy\
    *Ustawia wartosci zmiennych na 0
    */
    Product();
    
    /**
    *@brief Metoda wypisujaca dane 
    *Metoda wypisuje na ekran wartosci
    *@return metoda nic nie zwraca
    */
    void Print();

    /**
    *@brief Metoda zmieniajaca ilosc
    *@param [in] card Nowa ilosc ktora przypisujemy do zmiennej 'amount'
    *@return metoda nic nie zwraca
    */
    void SetCard(int card);

    Product& operator= (const Product& other);

};

#endif