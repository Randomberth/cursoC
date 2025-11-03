#include <stdio.h>

////// PROGRAMA QUE ASIGNA UN VALOR AL PUNTERO DE UNA VARIABLE /////

void change_value(char *letter)
{
    *letter = 'b';
}

int main()
{

    char l = 'e';

    change_value(&l);

    printf("\n");
    printf("el contenido del puntero de l es : %c", l);
    printf("\n \n");

    return (0);
}