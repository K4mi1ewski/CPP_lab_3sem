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
// * archiwum powinno zawierać katalog z zadaniem lab04/
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


#include <iostream>
#include "CoffeeMaker.h"
#include "Service.h"
using namespace std;


int main(int argc, char** argv) 
{
	CoffeeMaker MyCoffeeMaker1;
	
	MyCoffeeMaker1.SetID(1);
	MyCoffeeMaker1.SetState(false);
	MyCoffeeMaker1.SetCapacity(300.0);
	//MyCoffeeMaker1.SetConsumption(60.0);
	MyCoffeeMaker1.SetConsumption(50.0);
	MyCoffeeMaker1.SetCoffee(0.0);

	MyCoffeeMaker1.Presentation();
	
	MyCoffeeMaker1.Make(-5);
	MyCoffeeMaker1.Make(2);
	MyCoffeeMaker1.Start();
	MyCoffeeMaker1.Reload(25);
	MyCoffeeMaker1.Make(2);
	MyCoffeeMaker1.Start();
	MyCoffeeMaker1.Make(2);
	MyCoffeeMaker1.Reload(500);
	MyCoffeeMaker1.Stop();
	MyCoffeeMaker1.Reload(-10);
	MyCoffeeMaker1.Reload(500);
	MyCoffeeMaker1.Start();
	MyCoffeeMaker1.Make(2);
	MyCoffeeMaker1.Make(10);
	MyCoffeeMaker1.Stop();

	MyCoffeeMaker1.Presentation();
	
//////////////////////////////////////	

	CoffeeMaker * pMyCoffeeMaker1 = &MyCoffeeMaker1;
	
//////////////////////////////////////	

	Service CoffeeMakerService;
	
	CoffeeMakerService.Test(&MyCoffeeMaker1, 1.0);
	MyCoffeeMaker1.Presentation();

	CoffeeMakerService.Test(pMyCoffeeMaker1, 3.0);	
	MyCoffeeMaker1.Presentation();

	CoffeeMakerService.TestCopy(MyCoffeeMaker1, 20.0);
	MyCoffeeMaker1.Presentation();

//////////////////////////////////////	
	

	return 0;
}

/** Wynik dzialania programu:

### Prezentacja ###
Identyfikator ekspresu: 1
Ekspres jest wylaczony
Pojemnosc ekspresu wynosi 300 gramow
Srednia wydajnosc wynosi 50 gramow / litr
W ekspresie jest 0 gramow kawy

### Robienie kawy ###
BLAD: Niepoprawna ilosc litrow

### Robienie kawy ###
BLAD: Wlacz ekspres

### Uruchomienie ekspresu ###
BLAD: Brak kawy, wsyp

### Wsypywanie kawy ###
Wsypales 25 gramow kawy

### Robienie kawy ###
BLAD: Wlacz ekspres

### Uruchomienie ekspresu ###
Ekspres zostal wlaczony

### Robienie kawy ###
Zrobiles 0.5 litry/litrow kawy

### Wsypywanie kawy ###
BLAD: Wylacz ekspres przed wsypaniem kawy

### Zatrzymanie ekspresu ###
Ekspres zostal wylaczony

### Wsypywanie kawy ###
BLAD: Niepoprawna ilosc kawy do wsypania

### Wsypywanie kawy ###
Wsypales 300 gramow kawy

### Uruchomienie ekspresu ###
Ekspres zostal wlaczony

### Robienie kawy ###
Zrobiles 2 litry/litrow kawy

### Robienie kawy ###
Zrobiles 4 litry/litrow kawy

### Zatrzymanie ekspresu ###
Ekspres zostal wylaczony

### Prezentacja ###
Identyfikator ekspresu: 1
Ekspres jest wylaczony
Pojemnosc ekspresu wynosi 300 gramow
Srednia wydajnosc wynosi 50 gramow / litr
W ekspresie jest 0 gramow kawy

#############################################################
### Test serwisowy ###

1. Wsyp kawe do pelna:
### Wsypywanie kawy ###
Wsypales 300 gramow kawy
2. Przebieg testowy: 1 litry/litrow:
### Uruchomienie ekspresu ###
Ekspres zostal wlaczony

### Robienie kawy ###
Zrobiles 1 litry/litrow kawy

### Zatrzymanie ekspresu ###
Ekspres zostal wylaczony

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator ekspresu: 1
Ekspres jest wylaczony
Pojemnosc ekspresu wynosi 300 gramow
Srednia wydajnosc wynosi 50 gramow / litr
W ekspresie jest 250 gramow kawy

#############################################################
### Test serwisowy ###

1. Wsyp kawe do pelna:
### Wsypywanie kawy ###
Wsypales 50 gramow kawy
2. Przebieg testowy: 3 litry/litrow:
### Uruchomienie ekspresu ###
Ekspres zostal wlaczony

### Robienie kawy ###
Zrobiles 3 litry/litrow kawy

### Zatrzymanie ekspresu ###
Ekspres zostal wylaczony

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator ekspresu: 1
Ekspres jest wylaczony
Pojemnosc ekspresu wynosi 300 gramow
Srednia wydajnosc wynosi 50 gramow / litr
W ekspresie jest 150 gramow kawy

#############################################################
### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###

1. Wsyp kawe do pelna:
### Wsypywanie kawy ###
Wsypales 150 gramow kawy
2. Przebieg testowy: 20 litry/litrow:
### Uruchomienie ekspresu ###
Ekspres zostal wlaczony

### Robienie kawy ###
Zrobiles 6 litry/litrow kawy

### Zatrzymanie ekspresu ###
Ekspres zostal wylaczony

### Koniec testu serwisowego ###
#############################################################

### Prezentacja ###
Identyfikator ekspresu: 1
Ekspres jest wylaczony
Pojemnosc ekspresu wynosi 300 gramow
Srednia wydajnosc wynosi 50 gramow / litr
W ekspresie jest 150 gramow kawy

*/
