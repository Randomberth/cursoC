#include <stdio.h>
#include <string.h>

#define NOMBRES 20
#define SIZE 5

void array_size_asing(char *flecha, char valor)
{
    *flecha = valor;
}

int main()
{

    char size = 0, data = 'E';
    char personas11[size][data];

    printf("\n");
    printf("what size is your desire? \n \n");
    scanf("%hhd", &size);
    printf("\n");

    array_size_asing(&size, size);
    // imprimir nombres

    printf("\n");
    printf("    Ranking %d", size);
    printf("\n");

    for (int i = 0; i < sizeof(size); i++)
    {
        printf("\n");
        printf("    posición %d: %s", i, personas11[i]);
        printf("\n");
    }
    printf("\n");

    return (0);
}