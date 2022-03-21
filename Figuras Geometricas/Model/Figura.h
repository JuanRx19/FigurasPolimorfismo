#ifndef FIGURAS_GEOMETRICAS_FIGURA_H
#define FIGURAS_GEOMETRICAS_FIGURA_H
using namespace std;
#include <iostream>

class Figura {
private:
    string figura;
    string nombre;
public:
    Figura();
    virtual void mostrarFigura();
    virtual void mostrarArea();
    virtual double hallarArea();
    virtual void hallarPerimetro();
};


#endif //FIGURAS_GEOMETRICAS_FIGURA_H
