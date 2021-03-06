#include <string>
#include <iostream>

class Producto
{
private:
    std::string nombre;

public:
    Producto();
    Producto(std::string);
    void mostrarProducto();
};

class Cliente
{
private:
    std::string nombre, email;
    int id, telefono;
    float cantLitrosIngeridos;
public:
    Cliente();

};

class Tienda
{
private:
    Producto listaProductos[10];
    Cliente listaClientes[10];
    std::string nombreDueno;

public:
    Tienda();
    void mostrarTodosProductos();
};