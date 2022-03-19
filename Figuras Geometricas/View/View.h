#ifndef FIGURAS_GEOMETRICAS_VIEW_H
#define FIGURAS_GEOMETRICAS_VIEW_H
using namespace std;
#include <vector>
#include "../Model/Figura.h"
#include "../Model/Circulo.h"
#include "../Model/Cuadrado.h"
#include "../Model/Rectangulo.h"

    class View {
    private:
        vector<Figura*> figuras;
    public:
        void menu();

};


#endif //FIGURAS_GEOMETRICAS_VIEW_H
