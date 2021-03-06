#include "clases.hpp"

// Implementacion metodos de la tienda
Tienda::Tienda()
{
    this->listaProductos[0] = Producto("producto1");
    this->listaProductos[1] = Producto("producto2");
    std::cout << "Cree la tienda" << std::endl;
}

void Tienda::mostrarTodosProductos()
{

    for (int i = 0; i < 2; i++)
    {
        //Se usa el  método que tiene cada producto para mostrar su informació
        listaProductos[i].mostrarProducto();
    }
}

int main()
{
    // Crear la tienda
    Tienda laFarra;

    //Usar uno de los metodos de la tienda, que permite también luego
    // mostrar los productos
    laFarra.mostrarTodosProductos();
    return 0;
}