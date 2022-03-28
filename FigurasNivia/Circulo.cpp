#include <iostream>
#include "Circulo.h"

Circulo::Circulo(){

}

Circulo::Circulo(float radio){
    this -> radio = radio;
}

void Circulo::dibujarFigura(){
    for (int j = 0; j <= radio * 2; ++j) {
        for (int i = 0; i <= radio * 2; ++i) {
            if(pow(i - radio, 2.0) + pow(j - radio, 2.0) <= pow(radio, 2.0)){
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << "\n";
    }
}

float Circulo::calcularArea(){
    float area;
    area = 3.1416 * (radio * radio);
    return area;
}

float Circulo::calcularPerimetro(){
    float perimetro;
    perimetro = (2 * 3.14) * radio;
    return perimetro;
}

void Circulo::dibujarFiguraPintada() {
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
