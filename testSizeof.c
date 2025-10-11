#include <stdio.h>

int main()
{
    char x = 0;

    printf(" \n");
    printf("hello world \n");
    // x = sizeof(char);

    printf("El tamaño de un char es     : %ld bytes \n", sizeof(char));
    printf("El tamaño de un short es %ld bytes \n", sizeof(short));
    printf("El tamaño de un int es %ld bytes \n", sizeof(int));
    printf("El tamaño de un long es %ld bytes \n", sizeof(long));
    printf("El tamaño de un enum es %ld bytes \n", sizeof(enum {lunes,
                                                                martes,
                                                                miercoles,
                                                                jueves,
                                                                viernes,
                                                                sabado,
                                                                domingo}));
    printf("El tamaño de un float es %ld bytes \n", sizeof(float));
    printf("El tamaño de un double es %ld bytes \n", sizeof(double));

    // printf("El tamaño de x es %ld bytes \n", sizeof(x));
    printf(" \a \n \n ");

    return (0);
}