#include "View.h"

View::View(){

}

void View::agregarFigura(int x, float y, int z, int w){
    if( x == 1 ){
        figurasGeometricas.push_back(new Circulo( y ));
        cout << "Circulo Creado\n";
    }
    else if( x == 2 ){
        figurasGeometricas.push_back(new Cuadrado( z ));
        cout << "Cuadrado Creado\n";
    }
    else if( x == 3 ){
        figurasGeometricas.push_back(new Rectangulo( z, w));
        cout << "Rectangulo Creado\n";
    }else if( x == 4 ){
        figurasGeometricas.push_back(new TrianguloRectangulo(y, z, w));
    }
}

void View::dibujarFiguras(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFigura();
        cout << "\n\n";
    }
}

void View::mostrarAreas(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFigura();
        cout << "Area: " << figurasGeometricas[i]->calcularArea() << "\n\n";
    }
}

void View::mostrarPerimetros(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFigura();
        cout << figurasGeometricas[i]->calcularPerimetro() << "\n\n";
    }
}

void View::dibujarFigurasPintadas() {
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguraPintada();
        cout << "\n\n";
    }
}

float View::sumarTodasLasAreas(){
    float suma;
    for (int i=0; i<figurasGeometricas.size(); i++){
        suma += figurasGeometricas[i]->calcularArea();
    }
    return suma;
}

View::~View(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        FiguraGeometrica * tempFigura = figurasGeometricas[i];
        delete tempFigura;
        //cout << "Adios, Procesos Eliminados Y Figuras.\n";
    }
    //cout << "Adios, Procesos Eliminados.\n";
}

