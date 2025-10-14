/************* modulo principal ********************  Fichero principal.cpp - ncion proncipal
 *****************************/

#include <stdio.h>

int max(int x, int y);
void imprimir();

int main()
{
    int a = 0, b = 0, c = 0;
    int mayor = 0;

    printf("\n");
    printf("Valores a, b, y c: ");
    printf("\n \n");

    scanf("%d %d %d", &a, &b, &c);

    //    mayor = a + b + c;
    mayor = max(a, b);
    mayor = max(mayor, c);

    printf("\n mayor: %d \n", mayor);

    imprimir();

    return (0);
}
