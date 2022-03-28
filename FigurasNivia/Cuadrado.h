#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cout;
using std::cin;

class Cuadrado : public FiguraGeometrica{
    private:
        int lado;
    public:
        Cuadrado();
        Cuadrado(int lado);
        void dibujarFigura();
        float calcularArea();
        float calcularPerimetro();
        void dibujarFiguraPintada();
};

#endif