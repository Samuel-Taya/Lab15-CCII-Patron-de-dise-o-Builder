#ifndef BUILDERESPECIFICO_H
#define BUILDERESPECIFICO_H
#include "IBuilder.h"

class BuilderEspecifico : public IBuilder // herencia
{
private:
    Producto1 *product; // se crea un objeto de la clase producto1

public:
    BuilderEspecifico() // constructor
    {
        this->Reset(); // ver abajo
    }
    ~BuilderEspecifico() // destructor
    {
        delete product;
    }
    void Reset()
    {
        this->product = new Producto1(); // se crea un producto1 y se le asigna a product
    }
    void ProducirParteA() const override 
    {
        this->product->componentes.push_back("ParteA1"); // añade este string al vector componentes
    }
    void ProducirParteB() const override
    {
        this->product->componentes.push_back("ParteB1");
    }
    void ProducirParteC() const override
    {
        this->product->componentes.push_back("ParteC1");
    }
    Producto1 *GetProducto() // funcion del tipo GetProducto por apuntador
    {
        Producto1 *resultado = this->product;
        this->Reset();
        return resultado;
    }
};

#endif
/*
El puntero this es una variable predefinida para todas las funciones u operadores miembro de una clase. 
Este puntero contiene la dirección del objeto concreto de la clase al que se está aplicando la función 
o el operador miembro. Se puede decir que *this es un alias del objeto correspondiente.

Override : 
Muestra al lector del código que "este es un método virtual, que anula un método virtual de la clase base".
*/