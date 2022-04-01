//
// Created by CARLOS on 17/03/2022.
//

#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    lado = 0;
}

Cuadrado::Cuadrado(float longitudLado) {
    this->lado = longitudLado;
}

void Cuadrado::dibujarFigura() {
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i == 0 || j == 0 || i == 5 || j == 5){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Cuadrado::calcularArea() {
    area = lado * lado;
    cout << "El area del cuadrado es: " << area << "\n";
    return area;
}

double Cuadrado::calcularPerimetro() {
    perimetro = lado * 4;
    cout << "El perimetro del cuadrado es: " << perimetro << "\n";
    return perimetro;
}