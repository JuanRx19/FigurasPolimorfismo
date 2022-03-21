#include "Cuadrado.h"
#include <iostream>

Cuadrado::Cuadrado() {
    int lado;
    string nom;
    string c;
    cout << "Por favor ingrese un lado del cuadrado: ";
    cin >> lado;
    cout << "Ingrese un nombre a la figura: ";
    cin >> nom;
    c = "* * * * *\n";
    c += " *       *\n";
    c += " *       *\n";
    c += " * * * * *\n";
    cout << c;
    this->cuadrado = c;
    this->nombre = nom;
    this->lado = lado;
}

void Cuadrado::mostrarFigura() {
    cout << this->cuadrado;
}

double Cuadrado::hallarArea(){
    return this->lado * this->lado;
}

void Cuadrado::mostrarArea() {
    int area;
    area = hallarArea();
    cout << "Area del cuadrado " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void Cuadrado::hallarPerimetro() {
    int perimetro;
    perimetro = this->lado + this->lado + this->lado + this->lado;
    cout << "Perimetro del cuadrado " + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}