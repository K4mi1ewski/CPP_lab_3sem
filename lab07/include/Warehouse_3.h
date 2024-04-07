#ifndef WAREHOUSE_3_H
#define WAREHOUSE_3_H

class Warehouse_3
{
    private:

    int* container;
    int amount;
    int maxsize;

    public:

    /**
    * @brief metoda usuwa ostatni obiekt z magazynu i zwraca jego wartosc
    * @return wartosc usunietego elementu
    */
    int Remove();
    
    /**
    *@brief metoda sprawdza czy magazyn jest pusty
    *@return True jesli magazyn jest pusty
    *       False jesli nie jest pusty
    */
    bool IsEmpty();
    
    /**
    *@brief metoda sprawdza czy magazyn jest pelny
    *@return True jesli magazyn jest pelny
    *       False jesli nie jest pelny
    */
    bool IsFull();
    
    /**
    *@brief metoda dodaje wartosc na poczatek 
    *@param [in] value Wartosc do dodania
    *@return metoda nic nie zwraca (void)
    */
    void Insert(int value);
    
    /**
    *@brief metoda wypisuje zawartosc magazynu danych
    *@return metoda nic nie zwraca (void)
    */
    
    void Print();
    /**
    *@brief metoda usuwa elementy z magazynu
    *@return metoda nic nie zwraca (void)
    */
    void Clear();
    
    /**
    *@brief metoda zwraca, ile jest elementow w magazynie
    *@return Ilosc danych w magazynie
    */
    int Size(); 
    
    /**
    *@brief Konstruktor jednoargumentowy 
    */
    Warehouse_3(int size);
    
    /**
    *@brief Destruktor
    */
    ~Warehouse_3();
};


#endif