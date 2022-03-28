#include <iostream>
#include "Rectangulo.h"

Rectangulo::Rectangulo(){

}

Rectangulo::Rectangulo(int base, int altura){
    this -> base = base;
    this -> altura = altura;
}

void Rectangulo::dibujarFigura(){
    for(int i = 0; i < altura; i++) {
        for (int j = 0; j < base; j++){
            cout << " * ";
        }
        cout << "\n";
    }
}

float Rectangulo::calcularArea(){
    float area;
    area = base * altura;
    return area;
}

float Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = (base * 2) + (altura * 2);
    return perimetro;
}

void Rectangulo::dibujarFiguraPintada() {
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