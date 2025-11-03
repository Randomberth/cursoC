#include <stdio.h>

int main()
{
    char a[50];
    FILE *fp;
    fp = fopen("hola.txt", "r"); // retorna NULLsi no puede abrirse

    if (fp != NULL)
    {
        fscanf(fp, "%s", &a);
        // fprintf(fp, "Hola chico sexy");
        printf("\n");
        printf("SI se puede abrir : %s", a);
        fclose((fp));
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("NO se puedo abrir");
        printf("\n");
    }
    return 0;
}