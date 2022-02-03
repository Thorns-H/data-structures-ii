#include <iostream>

using std::string;

class Materia{
    public:
        Materia(){};
        Materia(string, string, string, string, int, int);

        string getNombre() { return this->nombre; }
        string getAcronimo(){ return this->acronimo; }
        string getProfesor(){ return this->profesor; }
        string getDias(){ return this->dias; }
        int getHoraInicio(){ return this->horaInicio; }
        int getHoraFinal(){ return this->horaFinal; }

        void setNombre(string nombre){ this->nombre = nombre; }
    private:
        string nombre;
        string acronimo;
        string profesor;
        string dias;
        int horaInicio;
        int horaFinal;
};

Materia::Materia(string nombre, string acronimo, string profesor, string dias, int horaInicio, int horaFinal){
    this->nombre = nombre;
    this->acronimo = acronimo;
    this->profesor = profesor;
    this->dias = dias;
    this->horaInicio = horaInicio;
    this->horaFinal = horaFinal;
}