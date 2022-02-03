#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define clear "cls"
#define pause "PAUSE"

#else
#define clear "clear"
#define pause "read -p '' var"

#endif

// gcc main.c && ./a.out && rm a.out

int main(){

    printf("\n- Nickname: SeisSiete\n");
    printf("- Carrera: Ingeniería en Computación\n");
    printf("- Preparatoria: UTEG\n");
    printf("- Lenguajes de Programación: C / C++ / Python\n\n");

    system(pause);
    system(clear);

    return 0;
}