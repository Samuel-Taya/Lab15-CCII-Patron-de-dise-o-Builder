#ifndef PRODUCTO1_H // instruccion del preprocesador
#define PRODUCTO1_H // se usa para definir una constante o tambien macros

class Producto1
{
public:
    std::vector<std::string> componentes; // crea un vector de strings llamado componentes

    void ListaComp() const // funcion para mostrar la lista de componentes
    {
        std::cout << "Componentes : ";
        for (size_t i = 0; i < componentes.size(); i++)
        {
            if (componentes[i] == componentes.back()) // .back() Devuelve una referencia al último elemento del vector.
            {
                std::cout << componentes[i]; // muestra asi si es el ultimo elemento
            }
            else
            {
                std::cout << componentes[i] << ", "; // muestra asi con los demas elementos
            }
        }
        std::cout << "\n\n";
    }
};

#endif