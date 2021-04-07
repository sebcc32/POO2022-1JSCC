#include <iostream>

class Circulo
{
private:
    float radio, pi;

public:
    Circulo();
    Circulo(float);
    float getRadio();
    void setRadio(float);
    void calcularArea();
    void calcularPerimetro();
};