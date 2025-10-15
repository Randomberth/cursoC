#include <stdio.h>

void changevalue(char *letter)
{
    *letter = 'A';
}

int main()
{
    char test = 'G';

    changevalue(&test);
    printf("\n");
    printf("el valor retornado es : %c", test);
    printf("\n \n");

    return (0);
}