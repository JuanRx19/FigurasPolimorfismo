#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo() {

}

TrianguloRectangulo::TrianguloRectangulo(int base, int altura, int hipotenusa){
    this->base = base;
    this->altura = altura;
    this->hipotenusa = hipotenusa;
}

void TrianguloRectangulo::dibujarFigura() {
    for(int i = 0; i < altura; i++) {
        for (int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

float TrianguloRectangulo::calcularArea() {
    float area;
    area = (base * altura)/2;
    return area;
}

float TrianguloRectangulo::calcularPerimetro() {
    float perimetro;
    perimetro = base + altura + hipotenusa;
    return perimetro;
}

void TrianguloRectangulo::dibujarFiguraPintada() {
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