#include "Nodo.h"

class Lista{
    public:
        void Inicializar();
        void AgregarMateria(Materia);
        Materia ConsultarMateria(string);
        void RemoverMateria(string);
        void MostrarMaterias();
    private:
        Nodo *cabecera;
};

void Lista::Inicializar(){
    this->cabecera = nullptr;
}

void Lista::AgregarMateria(Materia Clase){
    Nodo *tmp = new Nodo;
    tmp->Asignatura = Clase;
    tmp->siguente = nullptr;

    if(!this->cabecera){
        this->cabecera = tmp;
    }else{
        tmp->siguente = cabecera;
        this->cabecera = tmp;
    }
}

Materia Lista::ConsultarMateria(string nombre){
    Nodo *tmp = this->cabecera;

    Materia Vacia;
    Vacia.setNombre("@ERROR");

    if(this->cabecera){
        while(tmp){
            if(tmp->Asignatura.getNombre() == nombre){
                return tmp->Asignatura;
            }else{
                tmp = tmp->siguente;
            }
        }
        return Vacia;
    }else{ return Vacia; }
}

void Lista::RemoverMateria(string nombre){
    Nodo *actual, *anterior;
    actual = cabecera;

    if(this->cabecera){
        if(actual->Asignatura.getNombre() == nombre){
            cabecera = cabecera->siguente;
        }else{
            while(actual){
                if(actual->Asignatura.getNombre() == nombre){
                    anterior = actual;
                    actual = actual->siguente;
                    anterior->siguente = actual->siguente; 
                    
                    delete actual;
                    break;
                }else{
                    actual = actual->siguente;
                }
            } 
        }
    }
}

void Lista::MostrarMaterias(){
    Nodo *tmp = this->cabecera;
    int cont = 1;

    if(this->cabecera){
        while(tmp){
            std::cout << "\t\t[#" << cont << "] - " << tmp->Asignatura.getNombre() << " (" << tmp->Asignatura.getAcronimo() << ")." << std::endl;
            std::cout << "\n\t - Profesor: " << tmp->Asignatura.getProfesor() << std::endl;
            std::cout << "\t - Dias de la Semana: " << tmp->Asignatura.getDias() << " de " << tmp->Asignatura.getHoraInicio() << " a " << tmp->Asignatura.getHoraFinal() << "hrs.\n" << std::endl;

            cont++; tmp = tmp->siguente;
        }
    }else{
        std::cout << "\n\t@ERROR: ¡No hay materias registradas!" << std::endl;
    }
}