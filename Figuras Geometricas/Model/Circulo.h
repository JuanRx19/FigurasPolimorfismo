#ifndef FIGURAS_GEOMETRICAS_CIRCULO_H
#define FIGURAS_GEOMETRICAS_CIRCULO_H
#include <iostream>
using namespace std;
#include "Figura.h"

class Circulo : public Figura {
    private:
        string circulo;
        string nombre;
        double radio;
    public:
        Circulo();
        void mostrarFigura();
        void mostrarArea();
        double hallarArea();
        void hallarPerimetro();
};


#endif //FIGURAS_GEOMETRICAS_CIRCULO_H
