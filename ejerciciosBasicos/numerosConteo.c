/* Escribe un programa que pida al usuario 10 números enteros. Luego, cuenta y muestra:
Cuántos números son positivos, cuántos negativos y cuántos son cero.
Para esto, usarás un bucle FOR para pedir los 10 números y dentro del bucle, usarás IF, ELSE IF para clarificarlos.
  */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numeros[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int positivos = 0, negativos = 0, same_cero = 0;

    printf("\n");
    printf("    Clasifiquemos números positivos, negativos e iguales a cero");
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("    por favor ingrese valor nº %d : ", i);
        scanf("%d", &numeros[i]);

        if (numeros[i] < 0)
            negativos++;
        else if (numeros[i] > 0)
            positivos++;
        else
            same_cero++;
    }

    printf("\n");
    printf("    Números positivos : %d", positivos);
    printf("\n");
    printf("    Números negativos : %d", negativos);
    printf("\n");
    printf("    Números == 0      : %d", same_cero);
    printf("\n \n");

    return (0);
}