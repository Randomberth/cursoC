#include <stdio.h>

int main()
{
    int opcion = 0;

    printf("\n");
    printf("MathSolver-Tu Programa para Solucionar Problemas Matematicos Basicos\n");
    printf("\n");
    printf("Bienvenido =D\n");
    printf("\n");
    printf("Menu de Opciones:\n");
    printf("\n");
    printf("1.-Suma(adicion)\n");
    printf("2.-Resta(sustraccion)\n");
    printf("3.-Multiplicacion\n");
    printf("4.-Division\n");
    printf("5.-Comparacion de numeros(evaluar quien es mayor)\n");
    printf("6.-Finalizar el Programa.\n");
    printf("\n");
    printf("Indique la Operacion a Realizar:\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("\n");
        printf(" Suma(adicion)");
        printf("\n");

        float X = 0, Y = 0, Z = 0;

        printf("Ingrese el valor de X\n");
        scanf("%f", &X);

        printf("Ingrese el valor de Y\n");
        scanf("%f", &Y);

        Z = X + Y;

        printf("\n el resultado de la suma entre X + Y es igual a Z= %f", Z);
        printf("\n");

        break;

    case 2:
        printf("\n");
        printf(" Resta(sustraccion)");
        printf("\n");

        printf("Ingrese el valor de X\n");
        scanf("%f", &X);

        printf("Ingrese el valor de Y\n");
        scanf("%f", &Y);

        Z = X - Y;

        printf("\n el resultado de la resta entre X - Y es igual a Z= %f", Z);
        printf("\n");

        break;

    case 3:
        printf("\n");
        printf(" Multiplicacion)");
        printf("\n");

        printf("Ingrese el valor de X\n");
        scanf("%f", &X);

        printf("Ingrese el valor de Y\n");
        scanf("%f", &Y);

        Z = X * Y;

        printf("\n el resultado de la multiplicacion entre X * Y es igual a Z= %f", Z);
        printf("\n");

        break;

    case 4:
        printf("\n");
        printf(" Division");
        printf("\n");

        printf("Ingrese el valor de X\n");
        scanf("%f", &X);

        printf("Ingrese el valor de Y\n");
        scanf("%f", &Y);

        Z = X / Y;

        printf("\n el resultado de la division entre X / Y es igual a Z= %f", Z);
        printf("\n");

        break;

    case 5:
        printf("\n");
        printf("Comparacion de numeros(evaluar quien es mayor)");
        printf("\n");

        printf("Ingrese el valor de X\n");
        scanf("%f", &X);

        printf("Ingrese el valor de Y\n");
        scanf("%f", &Y);

        if (X > Y)
        {
            printf("X es mayor que Y\n");
        }
        else
        {
            printf("Y es mayor que X\n");
        }

    case 6:
        break;

        return 0;
    }
}