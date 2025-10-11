#include <stdio.h>

int main()
{
    char car = '\0';
    printf("Desea continuar s/n (sí o no) ");
    car = getchar();
    while (car != 's' && car != 'n')
    {
        fflush(stdin);
        printf("Desea continuar s/n (sí o no) ");
        car = getchar();
    }

    return (0);
}