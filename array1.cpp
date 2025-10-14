#include <stdio.h>
#include <string.h>

void array_size_asign(char *flecha, char valor)
{
    *flecha = valor;
}

int main()
{
    char size = 0, data = 0;
    char arrayflex[size][data];

    printf("\n");
    printf("what size is your desire? \n \n");
    scanf("%s", &size);
    printf("\n");

    array_size_asign(&size, size);

    for (int i = 0; i < size; i++)
    {
        printf("El array tiene %hd posiciones \n", i);
    }

    printf("\n");

    return (0);
}
