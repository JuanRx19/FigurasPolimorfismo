#include "View.h"
#include <iostream>

void View::opcion(){
    int opc;
    cout << "1. Cuadrado\n";
    cout << "2. Rectangulo\n";
    cout << "3. Circulo\n";
    cout << "Seleccione una opcion: ";
    cin >> opc;
    switch (opc) {
        case 1:
            figuras.push_back(new Cuadrado());
            break;
        case 2:
            figuras.push_back(new Rectangulo());
            break;
        case 3:
            figuras.push_back(new Circulo());
            break;
        default:
            cout << "No existe\n";
        }
}

void View::menu(){
    int opc = 0;
    double sumaAreas = 0;
    do{
        cout << "Por favor seleccine el tipo de figura\n";
        cout << "1. Agregar figura\n";
        cout << "2. Mostrar figuras\n";
        cout << "3. Mostrar area de todas las figuras\n";
        cout << "4. Mostrar perimetro de todas las figuras\n";
        cout << "5. Sumar area de todas las figuras\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;
        switch (opc) {
            case 1:
                opcion();
                break;
            case 2:
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->mostrarFigura();
                }
                break;
            case 3:
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->mostrarArea();
                }
                break;
            case 4:
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->hallarPerimetro();
                }
                break;
            case 5:
                for(int i = 0; i < figuras.size(); i++){
                    sumaAreas += figuras[i]->hallarArea();
                }
                cout << "Suma de todas las areas: ";
                cout << sumaAreas;
                cout << "\n";
                break;
            case 0:
                cout << "Hasta pronto!\n";
                break;
            default:
                cout << "Opcion inexistente\n";
        }
    }while(opc != 0);

}