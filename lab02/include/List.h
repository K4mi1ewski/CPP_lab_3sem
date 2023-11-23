#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};


/** @brief Zainicjowanie pustej listy
*
* Funkcja ustawia wskaznik head pustej listy na NULL
*
* @param[in] list  wskaznik do listy
* @return funkcja nic nie zwraca (typ void)
*/
void init(slist * list);

/** @brief Dodanie nowego elementu na koniec listy.
*
* Funkcja tworzy nowy element listy a nastepnie dodaje go na koniec.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc nowego elementu 
* @return funkcja nic nie zwraca (typ void)
*/
void push_back(slist * list, char c);

/** @brief Usuwanie pierwszego elementu z listy.
*
* Funkcja usuwa pierwszy element znajdujacy sie w liscie (ten, na ktorego wskazuje head). \n
* Jesli lista jest pusta, wypisuje sie odpowiedni komunikat.
*
* @param[in] list  wskaznik do listy
* @return funkcja nic nie zwraca (typ void)
*/
void pop_front(slist * list);

/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);

/** @brief Wypisanie listy.
*
* Funkcja wypisuje wszystkie elementy listy, zaczynajac od poczatku (od wskaznika head).
*
* @param[in] list  wskaznik do listy 
* @return funkcja nic nie zwraca (typ void)
*/
void printl(slist * list);

#endif
