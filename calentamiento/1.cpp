#include <iostream>

using namespace std;

int incluirIVA(int precio){
    precio+=precio*0.19;
    return precio;
}

int main(){
    string producto;
    int precio;
    cout<<"Digite el nombre del producto: ";
    getline(cin,producto);
    cout<<"Digite el precio del producto: ";
    cin>>precio;
    cout<<producto<<" $"<<precio<<endl;
    cout<<"+IVA: "<<incluirIVA(precio);
    return 0;
}