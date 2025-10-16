#include <stdio.h>

int main()
{
    int vector1[10] = {32, 11, 22, 33, 44, 55, 66, 77, 88, 99};

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            printf("\n");
            printf("    el valor en la posición %d es %d", i, vector1[i]);
            printf("\n");
        }
        else
        {
            printf("    el valor en la posición %d es %d", i, vector1[i]);
            printf("\n");
        }
    }
    printf("\n");

    return (0);
}