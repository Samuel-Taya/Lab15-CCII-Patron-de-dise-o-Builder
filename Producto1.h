#ifndef PRODUCTO1_H
#define PRODUCTO1_H

class Producto1
{
public:
    std::vector<std::string> componentes;
    void ListaComp() const
    {
        std::cout << "Componentes : ";
        for (size_t i = 0; i < componentes.size(); i++)
        {
            if (componentes[i] == componentes.back())
            {
                std::cout << componentes[i];
            }
            else
            {
                std::cout << componentes[i] << ", ";
            }
        }
        std::cout << "\n\n";
    }
};

#endif