#include "Nodo.h"

class Lista{
    public:
        void Inicializar();
        void AgregarMateria(Materia);
        Materia ConsultarMateria(string);
        void RemoverMateria(string);
        void MostrarMaterias();
        void MostrarMateria(Materia);
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

void Lista::RemoverMateria(string Nombre){
    Nodo *tmp, *anterior;
    tmp = cabecera;

    if(tmp->Asignatura.getNombre() == Nombre){
        cabecera = cabecera->siguente;
    }else{
        while(Nombre != tmp->siguente->Asignatura.getNombre()){
            tmp = tmp->siguente;
        }
        anterior = tmp;
        tmp = tmp->siguente;
        anterior->siguente = tmp->siguente;
    }
        delete tmp;
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

void Lista::MostrarMateria(Materia Asignatura){
    std::cout << "\t\t- " << Asignatura.getNombre() << " (" << Asignatura.getAcronimo() << ")." << std::endl;
    std::cout << "\n\t - Profesor: " << Asignatura.getProfesor() << std::endl;
    std::cout << "\t - Dias de la Semana: " << Asignatura.getDias() << " de " << Asignatura.getHoraInicio() << " a " << Asignatura.getHoraFinal() << "hrs.\n" << std::endl;
}