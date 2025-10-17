#include <stdlib.h>
// #include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Persona
{
private: // Atributos
    int edad;
    string nombre;

public: // Metodos
    Persona(int, string);
    void leer();
    void correr();
};

int main()
{
    printf("\n");
    printf("    hola sexy boy");
    printf("\n \n");

    return (0);
}