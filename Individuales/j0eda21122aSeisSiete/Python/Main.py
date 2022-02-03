import os
import time

if os.name in ["nt"]:
    clear = "cls"
    pause = "pause"
else:
    clear = "clear"
    pause = "read -p '' var"

# python3 j0/Python/Main.py

def main():
    print("- Nickname: SeisSiete")
    print("- Carrera: Ingeniería en Computación")
    print("- Preparatoria: UTEG")
    print("- Lenguajes de Programación: C / C++ / Python\n")

    os.system(pause)
    os.system(clear)

if __name__ == '__main__':
    main()