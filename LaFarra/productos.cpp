#include "clases.hpp"

// Implementación métodos de la clase producto
Producto::Producto() {}

Producto::Producto(std::string nombre)
{
    this->nombre = nombre;
}

void Producto::mostrarProducto()
{
    std::cout << "El producto es " << this->nombre;
}
