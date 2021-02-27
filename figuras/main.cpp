#include <iostream>

using namespace std;

class Circulo{
    private:
        float PI, radio;

    public:
        Circulo(float, float); //Constructor
        void calcularPerimetro();
        void calcularArea();
        float getRadio();
};

class Rectangulo{
    private:
        float largo, ancho;

    public:
        Rectangulo(float, float); //Constructor
        void calcularPerimetro();
        void calcularArea();
        float getLargo();
};

Circulo::Circulo(float pi, float rad){
    this->PI=pi;
    this->radio=rad;
}

void Circulo::calcularPerimetro(){
    cout<<"El perimetro es: "<<PI*(radio*radio)<<endl;
}

void Circulo::calcularArea(){
    cout<<"El area es: "<<(2*PI)*radio<<endl;
}

float Circulo::getRadio(){
    return this->radio;
}

Rectangulo::Rectangulo(float l, float a){
    this->largo=l;
    this->ancho=a;
}

void Rectangulo::calcularPerimetro(){
    cout<<"El perimetro es: "<<((2*largo)+(2*ancho))<<endl;
}

void Rectangulo::calcularArea(){
    cout<<"El perimetro es: "<<(largo*ancho)<<endl;
}

float Rectangulo::getLargo(){
    return this->largo;
}

int main(){
    float pi,rad,l,a;
    int opcion;
    cout<<"1. Circulo\n2. Rectangulo\n>> ";
    cin>>opcion;
    switch (opcion){
    case 1:
        cin>>pi;
        cin>>rad;
        Circulo miCirculo(pi,rad);
        miCirculo.calcularPerimetro();
        miCirculo.calcularArea();
        cout<<"El ultimo radio usado fue: "<<miCirculo.getRadio();
        break;
    case 2:
        cin>>l;
        cin>>a;
        Rectangulo miRectangulo(l,a);
        miRectangulo.calcularPerimetro();
        miRectangulo.calcularArea();
        cout<<"El ultimo largo usado fue: "<<miRectangulo.getLargo();
        break;
    default:
        break;
    }

}