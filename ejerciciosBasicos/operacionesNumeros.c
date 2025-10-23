/* Diseña un programa que muestre un menú con las siguientes opciones:

Sumar los números del 1 al N (usando FOR)
Factorial de un número (usando WHILE)
Verificar si un número es primo (usando IF, ELSE IF y FOR)

Salir
El programa debe pedir al usuario que elija una opción y luego realice la operación correspondiente.
Usa un DO WHILE para mostrar el menú hasta que el usuario elija salir.
  */
#include <stdio.h>

int main(int argc, char argv[])
{
    int tecla_esc;

    while (tecla_esc != 27)
    {
        printf("\n");
        printf("    presione una tecla (ESC para salir)");
        tecla_esc = getchar();
        printf(("\n \n"));

        printf("La tecla presionada corresponde a %d del còdigo ASCII", tecla_esc);
        printf(("\n \n"));
    }
    return (0);
}