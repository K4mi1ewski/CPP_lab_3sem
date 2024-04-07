#ifndef FIGURY_H
#define FIGURY_H

#include "Figura.h"
#include <vector>
#include "Kwadrat.h"
#include "Okrag.h"
class Figury
{
  vector<Figura*> figury; 
  public:
  void Rysuj();
  void DodajFigure(Figura* obj); 
};

#endif