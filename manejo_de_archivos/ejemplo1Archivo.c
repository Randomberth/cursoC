#include <stdio.h>

void imprimirArreglo(int array[], int tot)
{
    for (int i = 0; i < tot; i++)
    {
        printf("    posición %d vale : %d \n", i, array[i]);
    }
}

void guardarArray(FILE *op, int *array)
{
    int total;
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
            fscanf(op, "%d", &array[i]);
        }
    }
}

int main()
{
    int arreglo[100] = {0}, total = 0;

    FILE *fp0 = fopen("nota1.txt", "r");
    FILE *fp1 = fopen("nota2.txt", "r");
    FILE *fp2 = fopen("nota3.txt", "r");

    if (fp0 == NULL)
    {
        printf("\n");
        perror("    Open file");
        //        return 1;
    }
    else
    {
        printf("\n");
        perror("    Open file");
        fscanf(fp0, "%d", &total);

        for (int i = 0; i < total; i++)
        {
            fscanf(fp0, "%d", &arreglo[i]);
        }

        printf("\n");
        imprimirArreglo(arreglo, total);
    }
    printf("\n");
    return 0;
}