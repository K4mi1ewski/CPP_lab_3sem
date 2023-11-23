#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>


/** @brief Zainicjowanie pustej tablicy
*
* Funkcja alokuje dynamicznie pusta tablice i ustawia jej wartosci na 0
*
* @param[in] size rozmiar tablicy
* @return wskaznik na zaalokowana tablice
*/
int* InitArray(int size);

/** @brief Ustawienie wartosci tablicy na kwadraty kolejnych liczb naturalnych
*
* Funkcja podnosi do drugiej potegi kolejne liczby naturalne (zaczynajac od zera) i wypelnia nimi tablice
* Kazdy element w tablicy wynosi tyle, co jego indeks w tablicy podniesiony do 2 potegi.
*
* @param[in] array wskaznik do dynamicznie zaalokowanej tablicy
* @param[in] size rozmiar tablicy  
* @return funkcja nic nie zwraca (typ void)
*/
void CreateSequence(int* array, int size);

/** @brief Zmiana rozmiaru dynamicznie alokowanej tablicy
*
* Funkcja tworzy nowa dynamicznie alokowana tablice o nowym rozmiarze, przenoszac do niej wartosci ze starej tablicy,
* a nastepnie usuwa po poprzedniej pamiec. Jesli nowa tablica jest wieksza niz poprzednia, elementy o indeksach wiekszych lub rownych
* rozmiarowi starej tablicy sa ustawiane na 0.
*
* @param[in] array wskaznik do poprzedniej dynamicznie zaalokowanej tablicy
* @param[in] old_size rozmiar poprzedniej tablicy
* @param[in] new_size rozmiar nowej tablicy  
* @return Funkcja zwraca dynamicznie zaalokowana tablice o nowym rozmiarze, z danymi z poprzedniej tablicy.
*/
int* ChangeArraySize(int* array, int old_size, int new_size);

/** @brief Czyszczenie pamieci po tablicy
* 
* Funkcja usuwa pamiec po dynamicznie zaalokowanej tablicy.
*
* @param[in] array wskaznik do dynamicznie zaalokowanej tablicy
* @return funkcja nic nie zwraca (typ void)
*/
void DeleteArray(int*array);



#endif