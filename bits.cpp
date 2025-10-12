#include <stdio.h>

#define PI 3.1416

int main()
{
    char test = 50;

    printf("\n");
    printf("    Soy el ingeniero mas sexy de esta vaina : %c \n", test);
    test = test << 1;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", test);
    printf("    cuyo valor ASCII es : %d", test);
    printf("\n \n");

    return (0);
}