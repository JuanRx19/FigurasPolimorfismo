#include "Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo() {
    double altura, base;
    string nom;
    string rec;
    cout << "Por favor ingrese la altura del rectangulo: ";
    cin >> altura;
    cout << "Por favor ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese un nombre a la figura: ";
    cin >> nom;
    rec = "* * * * * * *\n";
    rec += "*           *\n";
    rec += "*           *\n";
    rec += "* * * * * * *\n";
    cout << rec;
    this->rectangulo = rec;
    this->nombre = nom;
    this->altura = altura;
    this->base = base;
}

void Rectangulo::mostrarFigura() {
    cout << this->rectangulo;
}

double Rectangulo::hallarArea() {
    return this->base * this->altura;
}

void Rectangulo::mostrarArea() {
    int area;
    area = hallarArea();
    cout << "Area del rectangulo " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void Rectangulo::hallarPerimetro() {
    int perimetro;
    perimetro = this->altura + this->altura + this->base + this->base;
    cout << "Perimetro del cuadrado " + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}
