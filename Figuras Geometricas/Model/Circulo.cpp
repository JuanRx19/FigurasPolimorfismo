#include "Circulo.h"
#include <iostream>

Circulo::Circulo() {
    double radio;
    string nom;
    string cir = "";
    cout << "Por favor ingrese el radio del circulo: ";
    cin >> radio;
    cout << "Ingrese un nombre a la figura: ";
    cin >> nom;
    cir = "  * * *  \n";
    cir += "*       *\n";
    cir += "*       *\n";
    cir += "  * * * \n";
    cout << cir;
    this->circulo = cir;
    this->nombre = nom;
    this->radio = radio;
}

void Circulo::mostrarFigura() {
    cout << this->circulo;
}

double Circulo::hallarArea() {
    return (3.1416*(this->radio*this->radio));
}

void Circulo::mostrarArea() {
    int area;
    area = hallarArea();
    cout << "Area del circulo " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void Circulo::hallarPerimetro() {
    int perimetro;
    perimetro = ((2)*3.1416*(this->radio));
    cout << "Perimetro del circulo" + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}