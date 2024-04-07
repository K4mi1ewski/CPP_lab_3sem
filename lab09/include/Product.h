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
    *@brief Konstruktor jednoargumentowy
    *@param [in] t Wartosc, za pomoca ktorej inicjalizujemy zmienna 'type'
    */
    explicit Product(int t);


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

    /**
    *@brief Metoda zwracajaca ilosc
    *@return metoda zwraca wartosc zmiennej amount
    */
    int GetAmount();
    
    /**
    *@brief Operator konwertujacy na typ int
    *@return Operator zwraca zmienna type typu int
    */
    operator int() const;
    
    /**
    *@brief Operator konwertujacy na typ string
    *@return Operator zwraca napis, zawierajacy wartosci zmiennych type i amount, za pomoca metody ToString
    */
    operator string();
    
    /**
    *@brief Metoda wypisujaca wartosci
    *@return Metoda zwraca napis ktory zawiera wartosci zmiennych type oraz amount
    */
    string ToString();

    /**
    *@brief Funkcja porownujaca wartosci amount
    *Funkcja porownuje ilosci elementow (wartosci amount) w przekazanych produktach
    *@return 1 gdy pierwszego produktu jest wiecej
    *@return -1 gdy drugiego produktu jest wiecej
    *@return 0 gdy ilosci produktow sa takie same
    */
    friend int Compare(const Product& p1, const Product& p2);
};



#endif