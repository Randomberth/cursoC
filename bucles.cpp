#include <stdio.h>

int main()
{

    short y = 0, z = 0;

    printf("\n");
    printf("bucle for");
    for (short i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            printf("\n");
            printf("\n    bucle nº %hd", i);
            printf("\n");
        }
        else
        {
            printf("    bucle nº %hd", i);
            printf("\n");
        }
    }

    printf("\n");
    printf("bucle while");
    while (y < 10)
    {
        if (y == 0)
        {
            printf("\n");
            printf("\n    bucle nº %hd", y);
            printf("\n");
        }
        else
        {
            printf("    bucle nº %hd", y);
            printf("\n");
        }

        y++;
    }

    printf("\n");
    printf("bucle do while");
    do
    {
        if (z == 0)
        {
            printf("\n");
            printf("\n    bucle nº %hd", z);
            printf("\n");
        }
        else
        {
            printf("    bucle nº %hd", z);
            printf("\n");
        }

        z++;
    } while (z < 10);

    printf("\n");
    return (0);
}