#ifndef FIGURAS_GEOMETRICAS_RECTANGULO_H
#define FIGURAS_GEOMETRICAS_RECTANGULO_H
#include <iostream>
#include "Figura.h"

using namespace std;

class Rectangulo : public Figura{
    private:
        string rectangulo;
        string nombre;
        double altura;
        double base;
    public:
        Rectangulo();
        void mostrarFigura();
        void mostrarArea();
        double hallarArea();
        void hallarPerimetro();
};


#endif //FIGURAS_GEOMETRICAS_RECTANGULO_H
