#ifndef FIGURAS_GEOMETRICAS_CUADRADO_H
#define FIGURAS_GEOMETRICAS_CUADRADO_H
#include <iostream>
#include "Figura.h"

using namespace std;

class Cuadrado : public Figura{
    private:
        string cuadrado;
        string nombre;
        double lado;
    public:
        Cuadrado();
        void mostrarFigura();
        double hallarArea();
        void mostrarArea();
        void hallarPerimetro();
};


#endif //FIGURAS_GEOMETRICAS_CUADRADO_H
