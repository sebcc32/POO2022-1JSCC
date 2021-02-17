#include <iostream>

using namespace std;

int ingresarEdad(int edad){
    cin>>edad;
    return edad;
}

float ingresarAltura(float altura){
    cin>>altura;
    return altura;
}

string ingresarSexo(string sexo){
    getchar();
    getline(cin,sexo);
    return sexo;
}

int main(){
    string sexo;
    float altura;
    int edad;
    cout<<"Digite su edad: ";
    edad=ingresarEdad(edad);
    cout<<"Digite su sexo: ";
    sexo=ingresarSexo(sexo);
    cout<<"Digite su altura: ";
    altura=ingresarAltura(altura);
    cout<<"Usted es de "<<edad<<" años de edad, con "<<altura<<" metros de sexo "<<sexo<<endl;
    return 0;
}