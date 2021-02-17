#include <iostream>
#include <fstream>

using namespace std;

void mostrar(string nombre,string apellido,int numero){
    ifstream data("directorio.txt");
    while(data>>nombre>>apellido>>numero){
        cout<<nombre<<" "<<apellido<<", "<<numero<<endl;
    }
}

void agregar(string nombre,string apellido,int numero){
    ofstream data("directorio.txt");
    cout<<"Ingrese los datos de la siguiente manera: nombre apellido numero\nPara terminar Ctrl+Z"<<endl;
    while(cin>>nombre>>apellido>>numero){
        data<<nombre<<' '<<apellido<<' '<<numero;
    }
    data.close();
}

void crear(string nombre,string apellido,int numero){
    ofstream data("directorio.txt");
    data.close();
}

int main(){
    string nombre, apellido;
    int numero,op=8;
    cout<<"***DIRECTORIO***"<<endl;
    while(op!=0){
        cout<<"1. Crear directorio\n2.Agregar al directorio\n3.Mostrar Directorio\n0. Cerrar\n=>";
        cin>>op;
        switch (op){
        case 1:
            crear(nombre,apellido,numero);
            break;
        case 2:
            agregar(nombre,apellido,numero);
            break;
        case 3:
            mostrar(nombre,apellido,numero);
            break;
        default:
            break;
        }

    }

    return 0;
}