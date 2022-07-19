#include <iostream>
#include <vector> //libreria porque usamos la clase generica vector
#include "Producto1.h"
#include "IBuilder.h"
#include "BuilderEspecifico.h"
#include "Director.h"

using namespace std;

void ClienteCode(Director &director) //Recibe como argumento la direccion de memoria de un objeto de la clase Director
{
    BuilderEspecifico *builder = new BuilderEspecifico();
    director.set_builder(builder);
    std::cout << "Producto Basico:\n";
    director.BuildProductoMin();

    Producto1 *p = builder->GetProducto();
    p->ListaComp();
    delete p;

    std::cout << "Producto Completo:\n";
    director.BuildProductoCompleto();

    p = builder->GetProducto();
    p->ListaComp();
    delete p;

    std::cout << "Producto basico:\n";
    builder->ProducirParteA();
    builder->ProducirParteC();
    p = builder->GetProducto();
    p->ListaComp();
    delete p;

    delete builder;
}

int main()
{
    Director *director = new Director();
    ClienteCode(*director);
    delete director;
    return 0;
}