#include <iostream>
#include "Cuadrado.h"

Cuadrado::Cuadrado(){

}

Cuadrado::Cuadrado(int lado){
    this -> lado = lado;
}

void Cuadrado::dibujarFigura(){
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
            cout <<" * ";
        }
        cout << "\n";
    }
}

float Cuadrado::calcularArea(){
    float area;
    area = lado * lado;
    return area;
}

float Cuadrado::calcularPerimetro(){
    float perimetro;
    perimetro = lado + lado + lado + lado;
    return perimetro;
}

void Cuadrado::dibujarFiguraPintada() {
    int color;
    cout << "1. Amarillo\n";
    cout << "2. Azul\n";
    cout << "3. Rojo\n";
    cout << "Por favor seleccione un color: ";
    cin >> color;
    if(color == 1){
        color = 14;
    }else if(color == 2){
        color = 9;
    }else if( color == 3){
        color = 12;
    }
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, color);
    dibujarFigura();
    hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 7);
}