#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H


class CoffeeMaker
{
    private:
    int ID;
    bool state;
    double capacity;
    double consumption;
    double coffee;

    public:

    /**
    @brief metoda ustawiajaca id ekspresu
    */
    void SetID(int id);

    /**
    @brief metoda ustawiajaca stan (wlaczony/wylaczony) ekspresu
    */
    void SetState(bool st);

    /**
    @brief metoda ustawiajaca pojemnosc ekspresu
    */
    void SetCapacity(double cap);

    /**
    @brief metoda ustawiajaca zuzycie kawy (gram/litr) przez ekspres
    */
    void SetConsumption(double con);
    
    /**
    @brief metoda ustawiajaca ilosc kawy w ekspresie
    */
    void SetCoffee(double cof);

    /**
    @brief metoda pozwalajaca na  zrobienie kawy za pomoca ekspresu
    *@param[in] litres - ilosc litrow kawy jakie chcemy zrobic 
    *
    *Metoda pozwala na wyprodukowanie odpowiedniej ilosci kawy - jesli w ekspresie kawy jest za malo, zostanie zrobione tyle, ile sie da
    */
    void Make(double litres);
    
    /**
    @brief metoda wlaczajaca ekspres 
    */
    void Start();

    /**
    @brief metoda pozwala na dosypanie kawy do ekspresu
    *@param[in] g - ilosc gramow kawy jakie chcemy dosypac
    *
    *Metoda pozwala na dosypanie kawy do ekspresu - jezeli bedziemy chcieli dosypac wiecej kawy, niz pozwala na to pojemnosc ekspresu, wsypiemy kawe do pelna.
    */
    void Reload(double g);

    /**
    @brief metoda wylaczajaca ekspres
    */
    void Stop();

    /**
    @brief metoda wypisujaca dane ekspresu
    */
    void Presentation();

    /**
    @brief metoda zwracajaca wartosc pojemnosci ekspresu
    */
    double get_capacity();
    
    /**
    @brief metoda zwracajaca ilosc kawy w ekspresie
    */
    double get_coffee();
};






#endif