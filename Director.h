#ifndef DIRECTOR_H
#define DIRECTOR_H

class Director
{
private:
    IBuilder *builder; // se crea un objeto apuntador tipo IBuilder builder

public:
    void set_builder(IBuilder *builder)
    {
        this->builder = builder;
    }
    void BuildProductoMin() // se hace uso de la funcion ProducirParteA();
    {
        this->builder->ProducirParteA();
    }
    void BuildProductoCompleto() // se dan funciones a ejecutar
    {
        this->builder->ProducirParteA();
        this->builder->ProducirParteB();
        this->builder->ProducirParteC();
    }
};

#endif