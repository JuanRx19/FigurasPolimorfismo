#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
#include "FiguraGeometrica.h"

#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

using namespace std;
using std::cout;
using std::cin;
using std::vector;

class View{
    private:
        vector<FiguraGeometrica*>figurasGeometricas;
    public:
        View();
        ~View();
        void agregarFigura(int x, float y, int z, int w);
        void dibujarFiguras();
        void mostrarAreas();
        void mostrarPerimetros();
        float sumarTodasLasAreas();
        void dibujarFigurasPintadas();
};
#endif
