#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;

class FiguraGeometrica{
    protected:
        float area;
        float promedio;
    public:
        FiguraGeometrica();
        virtual void dibujarFigura();
        virtual float calcularArea();
        virtual float calcularPerimetro();
        virtual void dibujarFiguraPintada() = 0;
};
#endif
