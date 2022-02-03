#include "Lista.h"
#define ERROR "@ERROR"

#ifdef _WIN32
#define clear "cls"
#define pause "PAUSE"

#else
#define clear "clear"
#define pause "read -p '' var"

#endif

int main(){

    Lista Alumno;
    Alumno.Inicializar();

    Materia EDA1("Estructuras I", "EDA1", "Profe no tan barco", "LMI", 13, 15);
    Materia EDA2("Estructuras II", "EDA2", "Profe barco", "MJ", 11, 13);

    Alumno.AgregarMateria(EDA2);
    Alumno.AgregarMateria(EDA1);
    Alumno.MostrarMaterias();

    return 0;
}