#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("\n");
        printf("Ha olvidado su nombre. \n");
        exit(1);
    }
    if (argc != 3)
    {
        printf("\n");
        printf("Ha olvidado la rutina. \n");
        exit(1);
    }
    printf("\n");
    printf("    Hola %s \n", argv[1]);
    printf("    Hoy toca ejercitar %s ", argv[2]);

    return 0;
}