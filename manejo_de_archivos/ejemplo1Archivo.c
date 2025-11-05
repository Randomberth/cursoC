#include <stdio.h>

void imprimirArreglo(int array[], int tot)
{
    for (int i = 0; i < tot; i++)
    {
        printf("    posición %d vale : %d \n", i, array[i]);
    }
}

void sumarEnArray(FILE *op, int *array)
{
    int total, valor;
    if (op == NULL)
    {
        printf("\n");
        perror("    Open file");
        //        return 1;
    }
    else
    {
        printf("\n");
        perror("    Open file");
        fscanf(op, "%d", &total);

        for (int i = 0; i < total; i++)
        {
            //            fscanf(op, "%d", (array + i));
            fscanf(op, "%d", &valor);
            array[i] += valor;
        }
        fclose(op);
        imprimirArreglo(array, total);
    }
}

int main()
{
    int arreglo[100] = {0}, total0 = 0, total1 = 0, total2 = 0;

    FILE *fp0 = fopen("nota1.txt", "r");
    FILE *fp1 = fopen("nota2.txt", "r");
    FILE *fp2 = fopen("nota3.txt", "r");

    sumarEnArray(fp0, arreglo);

    sumarEnArray(fp1, arreglo);

    sumarEnArray(fp2, arreglo);

    printf("\n");
    return 0;
}