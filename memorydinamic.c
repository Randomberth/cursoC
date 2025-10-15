#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *array, *array1;

    array = malloc(10 * sizeof(int));
    array1 = malloc(15 * sizeof(int));

    if (array == NULL)
    {
        printf("\n");
        printf("Error: No se pudo asignar la memoria.");
        printf("\n \n");
        exit(1);
    }

    printf("\n");
    printf("    %p : \n", *array);
    printf("    %p : \n", array[0]);
    printf("    %p : \n", *array1);
    printf("    %p : ", array1[0]);
    printf("\n ");

    return (0);
}