#ifndef FIGURASGEOMETRICAS_TRIANGULORECTANGULO_H
#define FIGURASGEOMETRICAS_TRIANGULORECTANGULO_H

#include <iostream>
#include "FiguraGeometrica.h"

class TrianguloRectangulo : public FiguraGeometrica{
    private:
        int base, altura, hipotenusa;
    public:
        TrianguloRectangulo();
        TrianguloRectangulo(int base, int altura, int hipotenusa);
        void dibujarFigura();
        float calcularArea();
        float calcularPerimetro();
        void dibujarFiguraPintada();
};


#endif //FIGURASGEOMETRICAS_TRIANGULORECTANGULO_H
