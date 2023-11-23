// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
// Przykład polecenia 
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem lab05/
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane wg formatu wprowadzonego 
// * na wcześniejszych zajęciach
// * kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod) i cpp (definicje)
// * poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// * ! w wersji na najwyzsza liczbe punktow w implementowanych klasach mozna uzywac tylko tablic dynamicznych 



#include <iostream>
#include "Item.h"
#include "Order.h"
using namespace std;


int main(int argc, char** argv) 
{
	Item p1;
	p1.Presentation();
	p1.SetName("Jablka");
	p1.Presentation();
	Item p2("Banany");
	p2.Presentation();
	p2.SetPrice(4);
	p2.SetQuantity(21.3); 
	p2.Presentation();
	Item p3("Pomarancze", 7.1, 2.5);
	p3.Presentation();
	Item p4("Mandarynki", 1.9, 11.2);
	p4.Presentation();
	Item p5;
	p5 = p3;
	p5.SetName("Wisnie");
	p5.SetQuantity(52.7);
	p5.Presentation();
	Item p6;
	p6 = p5;
	p6.SetName("Czeresnie");
	p6.SetPrice(17);
	p6.Presentation();
	
	Order poly1; 
	poly1.Presentation();
	poly1.SetName("Zamowienie puste");
	poly1.Presentation();
	Order poly2("Nastepne zamowienie puste"); 
	poly2.Presentation();
	Order poly3("Zamowienie 3-pozycyjne", p1, p2, p3); 
	poly3.Presentation();
	Order poly4("Zamowienie 4-pozycyjne", p1, p2, p3, p4); 
	poly4.Presentation();
	
	Item points[6]; 
	points[0] = p1;
	points[1] = p2;
	points[2] = p3;
	points[3] = p4;
	points[4] = p5;
	points[5] = p6;

	Order * pPoly5 = new Order("Zamowienie 6-pozycyjne", 6, points); 
	pPoly5->Presentation();
	
	Item * pItems = pPoly5->GetItems();
	
	Order poly6("Nastepne zamowienie 6-pozycyjne", 6, pItems); 
	poly6.Presentation();

	poly1.SetNewItems(6, pItems);
	poly1.SetName("Oryginalne zamowienie puste");
	poly1.Presentation();
	
	delete pPoly5;
	
	poly6.Presentation();
	poly1.Presentation();
	
	poly3.SetItem(1, "Gruszki", 45.1, 11.99);
	poly3.Presentation();
	
	poly4.SetItem(0, "Orzechy", 23, 32.4);
	poly4.Presentation();
	poly3.SetItem(4, "Sliwki", 13, -4.876);
	poly3.Presentation();


	return 0;
}

/** Wynik dzialania programu:

Wywolanie konstruktora Item...

### Prezentacja pozycji zamowienia ###
Nazwa:
Cena: 0
Ilosc: 0

### Prezentacja pozycji zamowienia ###
Nazwa: Jablka
Cena: 0
Ilosc: 0

Wywolanie konstruktora Item...

### Prezentacja pozycji zamowienia ###
Nazwa: Banany
Cena: 0
Ilosc: 0

### Prezentacja pozycji zamowienia ###
Nazwa: Banany
Cena: 4
Ilosc: 21.3

Wywolanie konstruktora Item...

### Prezentacja pozycji zamowienia ###
Nazwa: Pomarancze
Cena: 7.1
Ilosc: 2.5

Wywolanie konstruktora Item...

### Prezentacja pozycji zamowienia ###
Nazwa: Mandarynki
Cena: 1.9
Ilosc: 11.2

Wywolanie konstruktora Item...

### Prezentacja pozycji zamowienia ###
Nazwa: Wisnie
Cena: 7.1
Ilosc: 52.7

Wywolanie konstruktora Item...

### Prezentacja pozycji zamowienia ###
Nazwa: Czeresnie
Cena: 17
Ilosc: 52.7

Wywolanie konstruktora Order...

### Prezentacja zamowienia ###
Nazwa:
Liczba pozycji: 0

### Prezentacja zamowienia ###
Nazwa: Zamowienie puste
Liczba pozycji: 0

Wywolanie konstruktora Order...

### Prezentacja zamowienia ###
Nazwa: Nastepne zamowienie puste
Liczba pozycji: 0

Wywolanie konstruktora Order...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

### Prezentacja zamowienia ###
Nazwa: Zamowienie 3-pozycyjne
Liczba pozycji: 3
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5

Wywolanie konstruktora Order...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

### Prezentacja zamowienia ###
Nazwa: Zamowienie 4-pozycyjne
Liczba pozycji: 4
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Order...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

### Prezentacja zamowienia ###
Nazwa: Zamowienie 6-pozycyjne
Liczba pozycji: 6
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2
Pozycja - nazwa: Wisnie, cena = 7.1, ilosc = 52.7
Pozycja - nazwa: Czeresnie, cena = 17, ilosc = 52.7

Wywolanie konstruktora Order...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

### Prezentacja zamowienia ###
Nazwa: Nastepne zamowienie 6-pozycyjne
Liczba pozycji: 6
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2
Pozycja - nazwa: Wisnie, cena = 7.1, ilosc = 52.7
Pozycja - nazwa: Czeresnie, cena = 17, ilosc = 52.7

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

Wywolanie konstruktora Item...

### Prezentacja zamowienia ###
Nazwa: Oryginalne zamowienie puste
Liczba pozycji: 6
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2
Pozycja - nazwa: Wisnie, cena = 7.1, ilosc = 52.7
Pozycja - nazwa: Czeresnie, cena = 17, ilosc = 52.7

Wywolanie destruktora Order...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

### Prezentacja zamowienia ###
Nazwa: Nastepne zamowienie 6-pozycyjne
Liczba pozycji: 6
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2
Pozycja - nazwa: Wisnie, cena = 7.1, ilosc = 52.7
Pozycja - nazwa: Czeresnie, cena = 17, ilosc = 52.7

### Prezentacja zamowienia ###
Nazwa: Oryginalne zamowienie puste
Liczba pozycji: 6
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2
Pozycja - nazwa: Wisnie, cena = 7.1, ilosc = 52.7
Pozycja - nazwa: Czeresnie, cena = 17, ilosc = 52.7

### Prezentacja zamowienia ###
Nazwa: Zamowienie 3-pozycyjne
Liczba pozycji: 3
Pozycja - nazwa: Gruszki, cena = 45.1, ilosc = 11.99
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5

### Prezentacja zamowienia ###
Nazwa: Zamowienie 4-pozycyjne
Liczba pozycji: 4
Pozycja - nazwa: Jablka, cena = 0, ilosc = 0
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5
Pozycja - nazwa: Mandarynki, cena = 1.9, ilosc = 11.2

### Prezentacja zamowienia ###
Nazwa: Zamowienie 3-pozycyjne
Liczba pozycji: 3
Pozycja - nazwa: Gruszki, cena = 45.1, ilosc = 11.99
Pozycja - nazwa: Banany, cena = 4, ilosc = 21.3
Pozycja - nazwa: Pomarancze, cena = 7.1, ilosc = 2.5

Wywolanie destruktora Order...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Order...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Order...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Order...

Wywolanie destruktora Order...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...

Wywolanie destruktora Item...
*/
