#include <stdio.h>

int main()
{

    short unsigned op = 0;
    int valor1 = 0, valor2 = 0, modulo = 0;
    float result = 0;

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

        switch (op)
    {
    case 1:
        printf("    Operación SUMA \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%d", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%d", &valor2);
        printf("\n \n");
        printf("    valor1 = %d, valor2 = %d \n \n", valor1, valor2);
        printf("\n \n");

        result = valor1 + valor2;
        printf("El resultado de la suma es : %.2f", result);
        printf("\n \n");
        break;
    case 2:
        printf("    Operación RESTA \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%d", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%d", &valor2);
        printf("\n \n");
        printf("    valor1 = %d, valor2 = %d \n \n", valor1, valor2);
        printf("\n \n");

        result = valor1 - valor2;
        printf("El resultado de la resta es : %.2f", result);
        printf("\n \n");
        break;
    case 3:
        printf("    Operación PRODUCTO \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%d", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%d", &valor2);
        printf("\n \n");
        printf("    valor1 = %d, valor2 = %d \n \n", valor1, valor2);
        printf("\n \n");

        result = valor1 * valor2;
        printf("El resultado de la multiplicación es : %.2f", result);
        printf("\n \n");

        break;
    case 4:
        printf("    Operación DIVISIÓN \n \n");
        printf("    Ingrese primer valor : ");
        scanf("%d", &valor1);
        printf("    Ingrese segundo valor : ");
        scanf("%d", &valor2);
        printf("\n \n");
        printf("    valor1 = %d, valor2 = %d \n \n", valor1, valor2);
        printf("\n \n");

        result = valor1 / valor2;
        modulo = valor1 % valor2;

        printf("    El resultado de la división es : %.2f \n", result);
        printf("    y su módulo es : %d", modulo);
        printf("\n \n");
        break;

    default:
        break;
    }

    return (0);
}