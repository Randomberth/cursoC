#include <stdio.h>

int main()
{

    short unsigned op = 0;
    float valor1 = 0, valor2 = 0, result = 0;

    printf("\n");
    printf("    Bienvenido a calculadora");
    printf("\n");

    printf("\n");
    printf("    1.- Suma \n");
    printf("    2.- Resta \n");
    printf("    3.- Multiplicación \n");
    printf("    4.- División \n \n");

    printf("    Seleccione una opción: ");
    scanf("%hu", &op);
    printf("\n");

    /*printf("\n \n");
    printf("    La opción elegida es : %c", op);
    printf("\n \n");*/

    switch (op)
    {
    case 1:
        printf("    Operación SUMA \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%f", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%f", &valor2);
        printf("\n \n");
        printf("    valor1 = %.2f, valor2 = %.2f \n \n", valor1, valor2);
        break;
    case 2:
        printf("    Operación RESTA \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%f", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%f", &valor2);
        printf("\n \n");
        printf("    valor1 = %.2f, valor2 = %.2f \n \n", valor1, valor2);
        break;
    case 3:
        printf("    Operación PRODUCTO \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%f", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%f", &valor2);
        printf("\n \n");
        printf("    valor1 = %.2f, valor2 = %.2f \n \n", valor1, valor2);
        break;
    case 4:
        printf("    Operación DIVISIÓN \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%f", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%f", &valor2);
        printf("\n \n");
        printf("    valor1 = %.2f, valor2 = %.2f \n \n", valor1, valor2);
        break;

    default:
        break;
    }

    return (0);
}