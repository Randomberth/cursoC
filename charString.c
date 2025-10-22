#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Cadena de Caracteres - Libreria string.h

strlen(str) --> Cantidad de caracteres.
strcpy(destino, origen) --> Copia cadena de caracteres.
strcat(destino, origen) --> Concatena en destino concatenado con origen.
strcmp(string1, string2) --> Compara dos string, si son iguales el resultado es 0 (cero).
*/

// declaración de funciones
void cambiar(char palabra[]);

int main(int argc, char *argv[])
{
    char cadena[12], receptora[12], concatena[25];
    int x = 0;

    x = 9;

    printf("Ingrese la frase o palabra :");
    fgets(cadena, 12, stdin);

    cambiar(cadena);
    strcpy(receptora, cadena);
    printf("\n");
    printf("    La cadena es : %c. \n", cadena[3]);
    printf("\n");

    printf("Ingrese la frase o palabra a concatenar :");
    fgets(concatena, 25, stdin);
    cambiar(concatena);
    strcat(concatena, cadena);

    printf("\n");
    printf("    La cadena es : %s. \n", cadena);
    printf("\n");
    printf("la cadena copiada contiene : %s ", receptora);
    printf("\n");
    printf("la cadena concatenada contiene : %s ", concatena);
    printf("\n");

    return (0);
}

void cambiar(char palabra[])
{
    int i, size;
    size = strlen(palabra);

    for (i = 0; i < size; i++)
    {
        if (palabra[i] == '\n')
        {
            palabra[i] = '\0';
        }
    }
}