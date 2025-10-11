#include <stdio.h>

int main()
{
    enum today
    {
        domingo,
        lunes,
        martes,
        miercoles,
        jueves,
        viernes,
        sabado
    };

    enum today hoy;

    hoy = 6;

    printf("\n");
    printf("  el dia elegido es: %d", hoy);
    printf("\n \n");

    if (hoy == 0)
        printf("  domingo");
    else if (hoy == 1)
    {
        printf("  lunes");
    }
    else if (hoy == 2)
    {
        printf("  martes");
    }
    else if (hoy == 3)
    {
        printf("  miércoles");
    }
    else if (hoy == 4)
    {
        printf("  jueves");
    }
    else if (hoy == 5)
    {
        printf("  viernes");
    }
    else if (hoy == 6)
    {
        printf("  sábado");
    }
    else
    {
        printf("  no corresponde con ningún dia");
    }

    printf("\n \n");

    return (0);
}