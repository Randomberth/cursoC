/* Crea un programa que genere un número aleatorio entre 1 y 100.
Luego, pide al usuario que adivine el número. El programa debe dar pistas ("muy alto" o "muy bajo") hasta que el usuario adivine.
Usa un DO WHILE para pedir al menos un intento y luego continuar hasta que acierte.
También puedes usar un WHILE para controlar el número máximo de intentos (por ejemplo, 10 intentos).
Si se acaban los intentos, el programa termina y muestra el número.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int aleatorio = 0, acierto = 10;
    aleatorio = (rand() % (100 - 1 + 1)) + 1;
    printf("\n");
    // printf("    Aleatorio = %d", aleatorio);
    printf("    Bienvenido al adivinador!! ");
    printf("\n");

    while (acierto > 0)
    {
        int valor_user = 0;
        acierto--;
        printf("\n");
        printf("    Por favor ingrese un numero del 1 al 100 : ");
        scanf("%d", &valor_user);
        printf("\n");

        // printf("\n");

        if (valor_user == aleatorio)
        {
            printf("    Excelente!!! ACERTASTE era el numero: %d", aleatorio);
            printf("\n \n");
            break;
        }
        else if (valor_user > aleatorio)
        {
            printf("    Valor Alto");
        }
        else
        {
            printf("    Valor Bajo");
        }

        printf(", Quedan %d intentos", acierto);
        printf("\n");

        if (acierto == 0)
        {
            printf("\n");
            printf("    Ya no queda mas intentos, fin del programa");
            printf("\n \n");
        }
    }

    return (0);
}
