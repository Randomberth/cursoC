#include <stdio.h>

int main()
{
    int array1[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array1) / sizeof(array1[0]);

    printf("\n");
    printf("    Tamaño del vector : %d ", size);
    printf("\n \n");

    for (int i = 0; i < size; i++)
    {
        int *po = &array1[i];
        int *pp = po + 1;
        printf("\n");
        printf("    Dirección posición [%d] : [%p] y contiene : %d\n ", i, &array1[i], array1[i]);
        printf("   Dirección posición [%d] : [%p] \n", i, po);
        printf("    Dirección posición [%d] : [%p] + 1 [%p] ", i, po, pp);
        printf("\n");
    }

    printf("\n \n");
    return 0;
}