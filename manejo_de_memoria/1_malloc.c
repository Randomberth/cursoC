#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *array_numeros = NULL; //Puntero al inicio del array
    int num_elementos;
    int i;

    // 1. Pedir al usuario el tama;o del array
    printf("\n");
    printf("    Cuantos numeros enteros desea almacenar? ");
    scanf("%d", &num_elementos);

    //2. Reservar dinamicamente el espacio.
    array_numeros = (int *)malloc(num_elementos * sizeof(int));

    // 3. Verificar si la asignacion fue succes
    //if (num_elementos != 1 || num_elementos <= 0){
    if (num_elementos <= 1){
        printf("\n");
        printf("    Error: No se pudo asignar la memoria necesaria. \n");
        return 1;
    }
    
    //4. llenar el array
    printf("\n");
    printf("    Memoria asignada exitosamente. Llenando el array.. \n");
    for (int i = 0; i < num_elementos; i++)
    {
        array_numeros[i] = (i + 1) * 10;
        printf("    Elemento %d: %d \n", i, array_numeros[i]);
    }

    //array_numeros = NULL;
    free(array_numeros);
    printf("\n");
    return 0;
}