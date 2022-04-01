//
// Created by CARLOS on 17/03/2022.
//

#include "Figura_Geometrica.h"

Figura_Geometrica::Figura_Geometrica() {
    area = 0;
    perimetro = 0;
}

void Figura_Geometrica::dibujarFigura(int color){
    switch (color) {
        case 1:
            system("Color 04");
            break;
        case 2:
            system("Color 03");
            break;
        case 3:
            system("Color 02");
            break;
        case 4:
            system("Color 05");
            break;
        case 5:
            system("Color 06");
            break;
        default:
            break;
    }
    dibujarFigura();
}