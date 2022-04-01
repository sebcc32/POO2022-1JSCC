//
// Created by CARLOS on 20/03/2022.
//

#include "View.h"

void View::agregarFigura() {
    int opcion;
    float longitudLado, base, altura, radio, lado, diagonalMenor, diagonalMayor;
    cout << "======== Figuras disponibles ========\n";
    cout << "1. Cuadrado\n";
    cout << "2. Circulo\n";
    cout << "3. Rectangulo\n";
    cout << "4. Rombo\n";
    cout << "Indique que figura desea agregar:\n";
    cin >> opcion;
    switch (opcion){
        case 1: {
            cout << "Ingrese la longitud de un lado del cuadrado:\n";
            cin >> longitudLado;
            Cuadrado cuadradoTemp(longitudLado);
            vectorFigura.push_back(new Cuadrado(cuadradoTemp));
            break;
        }
        case 2: {
            cout << "Ingrese el radio del circulo:\n";
            cin >> radio;
            Circulo circuloTemp(radio);
            vectorFigura.push_back(new Circulo(circuloTemp));
            break;
        }
        case 3:{
            cout << "Ingrese la base del rectangulo:\n";
            cin >> base;
            cout << "Ingrese la altura del rectangulo:\n";
            cin >> altura;
            Rectangulo rectangulo(base, altura);
            vectorFigura.push_back(new Rectangulo(rectangulo));
        }
        case 4:{
            cout << "Ingrese el lado del rombo:\n";
            cin >> lado;
            cout << "Ingrese la diagonal mayor del rombo:\n";
            cin >> diagonalMayor;
            cout << "Ingrese la diagonal menor del rombo:\n";
            cin >> diagonalMenor;
            Rombo rombo(lado, diagonalMayor, diagonalMenor);
            vectorFigura.push_back(new Rombo(rombo));
        }
            break;
        default:
            break;
    }
}

void View::mostrarAreaFigura() {
    for(auto & i : vectorFigura){
        i->calcularArea();
    }
    cout << "\n";
}

void View::dibujarFigura() {
    int opcion, color;
    vectorDibujo.push_back(new Cuadrado());
    vectorDibujo.push_back(new Circulo());
    vectorDibujo.push_back(new Rectangulo());
    vectorDibujo.push_back(new Rombo());
    cout << "Quiere la figura de un color?\n1. Si\n2. No\n>> ";
    cin >> opcion;
    if (opcion==1) {
        cout << "1. Rojo\n2. Azul\n3. Verde\n4. Purpura\n5. Amarillo\n";
        cin >> color;
    }
    for (int i = 0; i < vectorDibujo.size(); i++) {
        if (i == 0) {
            cout << "Dibujo del cuadrado:\n";
        } else if (i == 1) {
            cout << "Dibujo del circulo:\n";
        } else if (i == 2) {
            cout << "Dibujo del rectangulo:\n";
        } else if (i == 3) {
            cout << "Dibujo del rombo:\n";
        }
        if(opcion==2) vectorDibujo[i]->dibujarFigura();
        else if(opcion==1) vectorDibujo[i]->dibujarFigura(color);
    }
    system("Color 07");
    cout << "\n";
}
void View::mostrarPerimetroFigura() {
    for(auto & i : vectorFigura){
        i->calcularPerimetro();
    }
    cout << "\n";
}

void View::mostrarSumaAreas() {
    float suma = 0;
    for(auto & i : vectorFigura){
        suma += i->calcularArea();
    }
    cout << "La suma total del area de todas las figuras es de: " << suma << "\n\n";
}

int View::menu() {

    int opcion;
    cout << "1. Agregar figuras geometricas\n";
    cout << "2. Dibujar figuras geometricas disponibles\n";
    cout << "3. Mostrar area de figuras geometricas adicionadas\n";
    cout << "4. Mostrar perimetro de figuras geometricas adicionadas\n";
    cout << "5. Sumar area de todas las figuras geometricas adicionadas\n";
    cout << "0. Salir\n\n";
    cout << "Ingrese la opcion que desea realizar\n";
    cin >> opcion;
    return opcion;
}

void View::principal() {
    int opcion;
    cout << "========== Bienvenido =========\n";
    do{
        opcion = menu();
        switch (opcion) {
            case 1:
                agregarFigura();
                break;
            case 2:
                dibujarFigura();
                break;
            case 3:
                mostrarAreaFigura();
                break;
            case 4:
                mostrarPerimetroFigura();
                break;
            case 5:
                mostrarSumaAreas();
                break;
            default:
                break;
        }
    } while (opcion != 0);
}