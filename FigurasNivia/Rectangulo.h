#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cout;
using std::cin;

class Rectangulo : public FiguraGeometrica{
    private:
        int base, altura;
    public:
        Rectangulo();
        Rectangulo(int base, int altura);
        void dibujarFigura();
        float calcularArea();
        float calcularPerimetro();
        void dibujarFiguraPintada();
};

#endif
