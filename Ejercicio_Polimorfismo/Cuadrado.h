//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_CUADRADO_H
#define EJERCICIO_POLIMORFISMO_CUADRADO_H

#include <iostream>
#include "Figura_Geometrica.h"

using std::cin;
using std::cout;

class Cuadrado: public Figura_Geometrica{
private:
    float lado;
public:
    Cuadrado();
    Cuadrado(float lado);
    void dibujarFigura() override;
    float calcularArea() override;
    double calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_CUADRADO_H
