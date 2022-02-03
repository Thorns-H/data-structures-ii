#include "Materia.h"

class Nodo{
    public:
        Nodo(){};
    private:
        Nodo *siguente;
        Materia Asignatura;
    friend class Lista;
};