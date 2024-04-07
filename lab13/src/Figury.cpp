#include "Figury.h"

void Figury::Rysuj() 
{
    for (auto el: figury)
        el->Rysuj();
}

void Figury::DodajFigure(Figura* obj)
{
    figury.push_back(obj);
}