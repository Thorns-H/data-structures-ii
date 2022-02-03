#include <iostream>
#include <stdlib.h>

#ifdef _WIN32
#define clear "cls"
#define pause "PAUSE"

#else
#define clear "clear"
#define pause "read -p '' var"

#endif

using std::cout;
using std::cin;

// g++ main.cpp && ./a.out && rm a.out

int main(){

    cout << "\n- Nickname: SeisSiete\n";
    cout << "- Carrera: Ingeniería en Computación\n";
    cout << "- Preparatoria: UTEG\n";
    cout << "- Lenguajes de Programación: C / C++ / Python\n\n";

    system(pause);
    system(clear);

    return 0;
}