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

    /*char chicas22[SIZE][NOMBRES] = {
        "Keysi",
        "Venesia",
        "Eva",
        "Giselle",
        "Franyeli"};*/

    char size = 0, data = 'E';
    char chicas11[size][data];

    printf("\n");
    printf("what size is your desire? \n \n");
    scanf("%hhd", &size);
    printf("\n");

    array_size_asing(&size, size);
    // imprimir nombres

    printf("\n");
    printf("    Ranking chicas %d", size);
    printf("\n");

    for (int i = 0; i < sizeof(size); i++)
    {
        printf("\n");
        printf("    posición %d: %s", i, chicas11[i]);
        printf("\n");
    }
    printf("\n");

    return (0);
}