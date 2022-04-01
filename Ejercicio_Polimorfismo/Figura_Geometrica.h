//
// Created by CARLOS on 17/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_FIGURA_GEOMETRICA_H
#define EJERCICIO_POLIMORFISMO_FIGURA_GEOMETRICA_H

#include <iostream>
#include <vector>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::vector;
using std::string;

class Figura_Geometrica {
protected:
    float area;
    double perimetro;
public:
    Figura_Geometrica();
    virtual void dibujarFigura() = 0;
    void dibujarFigura(int color);
    virtual float calcularArea() = 0;
    virtual double calcularPerimetro() = 0;
};


#endif //EJERCICIO_POLIMORFISMO_FIGURA_GEOMETRICA_H
