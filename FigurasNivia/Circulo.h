#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
#include "FiguraGeometrica.h"

using std::cout;
using std::cin;

class Circulo : public FiguraGeometrica{
    private:
        float radio;
    public:
        Circulo();
        Circulo(float radio);
        void dibujarFigura();
        float calcularArea();
        float calcularPerimetro();
        void dibujarFiguraPintada();
};

#endif
