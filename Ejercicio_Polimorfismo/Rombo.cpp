//
// Created by sebas on 3/27/2022.
//

#include "Rombo.h"

Rombo::Rombo() {
    lado=0;
    diagonalMayor=0;
    diagonalMenor=0;
}

Rombo::Rombo(float lado, float diagonalMayor, float diagonalMenor) {
    this->lado = lado;
    this->diagonalMayor = diagonalMayor;
    this->diagonalMenor = diagonalMenor;
}

void Rombo::dibujarFigura() {
    int daigonal=3;
    int longitud = 2 * daigonal - 2;
    for (int i = 0; i < daigonal; i++) {
        for (int j = 0; j < longitud; j++)
            cout << " ";
        longitud = longitud - 1;

        for (int j = 0; j <= i; j++) {
            cout << " *";
        }
        cout << "\n";
    }
    for (int i=daigonal; i>=0; i--)
    {
        for (int j=longitud; j>0; j--)
            cout <<" ";
        longitud = longitud + 1;

        for (int j=i; j>=0; j-- )
        {
            cout << " *";
        }
        cout << "\n";
    }
}

float Rombo::calcularArea(){
    area = (diagonalMenor * diagonalMayor) / 2;
    cout << "El area del rombo es: " << area << "\n";
    return area;
}

double Rombo::calcularPerimetro(){
    perimetro = 4 * lado;
    cout << "El area del rombo es: " << perimetro << "\n";
    return perimetro;
}