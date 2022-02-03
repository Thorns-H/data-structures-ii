#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define clear "cls"
#define pause "PAUSE"

#else
#define clear "clear"
#define pause "read -p '' var"

#endif

#define MAXIMO_ASISTENCIAS 34

// gcc main.c && ./a.out && rm a.out

int main(){

    int asis;
    double per = 0;

    system(clear);
    printf("\t\t--- Calcular Portentaje de Asistencias ---");
    do{
        printf("\n\t- Digite las asistencias que tuvo: "); scanf("%i", &asis);
        if(asis < 0 || asis > MAXIMO_ASISTENCIAS){
            printf("\n\t¡Ha habido un error, no se puede tener %i de %i asistencias!", asis, MAXIMO_ASISTENCIAS); 
        }
    }while(asis < 0 || asis > MAXIMO_ASISTENCIAS);
    
    per = (asis / (float) MAXIMO_ASISTENCIAS) * 100;

    printf("\n\t- El porcentaje de asistencias es: %.2f", per);

    return 0;
}