#include <stdio.h>

void EscribirEnHola(char ruta[], char nombre[], char lastname[])
{
    FILE *fpw;
    fpw = fopen(ruta, "w");

    if (fpw == NULL)
    {
        printf("\n");
        perror("NO se puedo abrir");
        printf("\n");
    }
    else
    {
        printf("\n");
        fprintf(fpw, "\n");
        fprintf(fpw, " %s %s", nombre, lastname);
        fprintf(fpw, "\n \n");
        fclose((fpw));
    }
}

void LeerEnHola(char ruta[])
{
    FILE *fpr = fopen(ruta, "r");

    char texto0[50];
    char texto1[50];

    if (fpr == NULL)
    {
        printf("\n");
        perror("Open file not succes");
        printf("\n");
    }
    else
    {
        fscanf(fpr, "%s %s", texto0, texto1);
        printf("\n");
        printf("    Ahora me llamo : %s %s", texto0, texto1);
        printf("\n");
        fclose(fpr);
    }
}

int main()
{
    char name[80];
    char lastname[80];
//    FILE *fpw;

    printf("\n");
    printf("    Escoge un nombre!! : ");
    scanf("%s", name);
    printf("\n");
    printf("\n");
    printf("    Ahora un apellido : ");
    scanf("%s", lastname);

    EscribirEnHola("hola.txt", name, lastname);

    LeerEnHola("hola.txt");

    printf("\n");
    return 0;
}