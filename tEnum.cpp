#include <stdio.h>

enum colores
{
    azul,
    amarillo,
    rojo,
    verde,
    blanco,
    negro
};

int main()
{
    enum colores color;

    /*leer un color desde el teclado*/
    printf("Color :");
    scanf("%d", &color);
    /*Visualiza el color introducido*/
    printf("%d/n", color);
    /*Si el color es verde ...*/

    if (color == verde)
        printf("Esperanza");

    return 0;
}