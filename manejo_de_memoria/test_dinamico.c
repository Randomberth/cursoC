#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    int *array_dinamic;
    int *array_dinamic_new;

    printf("\n");
    printf("    ingrese el tamanio del cual desea el array : ");
    if (scanf("%d", &size) != 1 || size <= 0){
        printf("    Error: ingrese un tama;o valido (entero positivo). \n");
        return 1;
    }
    printf("\n");

    array_dinamic = (int *) (malloc(sizeof(int) * size));

    if (array_dinamic == NULL){
        printf("    Error: no se puso asignar la memoria solicitada. \n");
    }

    printf("    Array actual: \n");
    
    
    for (int i = 0; i < size; i++)
    {
        array_dinamic[i] = i *10;
        printf("    array dinamico[%d] = %d\n", i, array_dinamic[i]);
    }
    printf("\n");

    free(array_dinamic);
    printf("\n  Memoria liberada exitosamente. \n");
    printf("\n\n");

    printf("    ingrese el tamanio nuevo para el array : ");
    if (scanf("%d", &size) != 1 || size <= 0){
        printf("    Error: ingrese un tama;o valido (entero positivo). \n");
        return 1;
    }


    array_dinamic_new = realloc(array_dinamic, (sizeof(int) * size));

    printf("\n");
    printf("    Array New : \n");
    
    for (int i = 0; i < size; i++)
    {
        array_dinamic_new[i] = i *10;
        printf("    array dinamico[%d] = %d\n", i, array_dinamic[i]);
    }
    printf("\n\n");
    free(array_dinamic_new);

   return 0;
}