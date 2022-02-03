#include <iostream>
#include <stdlib.h>

#ifdef _WIN32
#define clear "cls"
#define pause "PAUSE"

#else
#define clear "clear"
#define pause "read -p '' var"

#endif

#define MAXIMO_ASISTENCIAS 34

// g++ main.cpp && ./a.out && rm a.out

int main(){

    int asis;
    double per = 0;

    system(clear);
    std::cout << "\t\t--- Calcular Portentaje de Asistencias ---" << std::endl;
    do{
        std::cout << "\n\t- Digite las asistencias que tuvo: "; std::cin >> asis;
        if(asis < 0 or asis > MAXIMO_ASISTENCIAS){
            std::cout << "\n\t¡Ha habido un error, no se puede tener " << asis << " de " << MAXIMO_ASISTENCIAS << "!" << std::endl;
        }
    }while(asis < 0 or asis > MAXIMO_ASISTENCIAS);
    
    per = (asis / (float) MAXIMO_ASISTENCIAS) * 100;

    printf("\n\t- El porcentaje de asistencias es: %.2f", per);

    return 0;
}