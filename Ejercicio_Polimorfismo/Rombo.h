//
// Created by sebas on 3/27/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_ROMBO_H
#define EJERCICIO_POLIMORFISMO_ROMBO_H

#include "Figura_Geometrica.h"

class Rombo: public Figura_Geometrica {
private:
    float lado;
    float diagonalMayor;
    float diagonalMenor;
public:
    Rombo();
    Rombo(float lado, float diagonalMayor, float diagonalMenor);
    void dibujarFigura();
    float calcularArea();
    double calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_ROMBO_H
