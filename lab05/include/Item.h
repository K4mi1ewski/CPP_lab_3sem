#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item
{
private:
string name;
double price;
double quantity;

public:
/**
*@brief metoda wypisujaca atrybuty klasy Item (nazwe, cene i ilosc)
*/
void Presentation();

/**
*@brief metoda ustawiajaca nazwe zamowienia
*@param[in] string nazwa, jaka chcemy ustawic
*/
void SetName(const string& string);

/**
*@brief metoda ustawiajaca cene zamowienia
*@param[in] pri cena, jaka chcemy ustawic
*/
void SetPrice(double pri);

/**
*@brief metoda ustawiajaca ilosc pozycji zamowienia
*@param[in] quan ilosc pozycji zamowienia, jaka chcemy ustawic
*/
void SetQuantity(double quan);


/**
*@brief metoda zwracajaca nazwe pozycji zamowienia
*/
string GetName();

/**
*@brief metoda zwracajaca cene pozycji zamowienia
*/
double GetPrice();

/**
*@brief metoda zwracajaca ilosc pozycji zamowienia
*/
double GetQuantity();

/**
*@brief Konstruktor bezargumentowy
*Ustawia domyslne wartosci przy tworzeniu nowego obiektu
*/
Item();

/**
*@brief Konstruktor jednoargumentowy
*Ustawia nazwe klasy na podana nazwe
*/
Item(const string& string);
/**
*@brief Konstruktor trojargumentowy
*Ustawia atrybuty klasy na  podane wartosci przy tworzeniu nowego obiektu
*/
Item(const string& string, double pri, double quan);

~Item();
};



#endif