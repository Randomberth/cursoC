#include <stdio.h>

int main(int argc, char *argv[])
{
    double const PI = 3.1416;
    int num_redondas = 0, num_rectangulares = 0;
    float area_redonda = 0, area_rectangulares = 0;
    float array_redondas[20] = {0}, array_rectangulares[7] = {0};

    printf("\n");
    printf("    Bienvenidos al programa para calcular pizzas \n \n");
    printf("    Cuantas pizzas redondas desea calcular? (maximo 20) : ");
    scanf("%d", &num_redondas);
    printf("\n");

    ///////////// calculo area redondas /////////////////////
    for (int i = 0; i < num_redondas; i++)
    {
        area_redonda = 0.0;
        int diametro_r = 0;

        printf("    ingrese el diametro de la pizza %d : ", i + 1);
        scanf("%d", &diametro_r);

        area_redonda = PI * (diametro_r / 2.0) * (diametro_r / 2.0);
        array_redondas[i] = area_redonda;
        //        printf("%.2f, %.2f", area_redonda, array_redondas[i]);
    }
    printf("\n");

    float aux_num_redondas = 0.0;
    for (int i = 0; i < num_redondas; i++)
    {
        aux_num_redondas += array_redondas[i];
        // printf("%.2f  %.2f \n", array_redondas[i], aux_num_redondas);
    }
    printf("\n");
    ////////////////////// calculo area cuadradas////////////////
    printf("    Cuantas pizzas rectangulares desea calcular? (maximo 7) : ");
    scanf("%d", &num_rectangulares);
    printf("\n");

    for (int i = 0; i < num_rectangulares; i++)
    {
        area_rectangulares = 0.0;
        int ancho = 0, largo = 0;

        printf("    ingrese el ancho de la pizza %d : ", i + 1);
        scanf("%d", &ancho);
        printf("    ingrese el largo de la pizza %d : ", i + 1);
        scanf("%d", &largo);

        area_rectangulares = ancho * largo;
        array_rectangulares[i] = area_rectangulares;
        //        printf("%.2f, %.2f", area_redonda, array_redondas[i]);
    }
    printf("\n");

    float aux_num_rectangulares = 0.0;
    for (int i = 0; i < num_rectangulares; i++)
    {
        aux_num_rectangulares += array_rectangulares[i];
        //        printf("%.2f  %.2f \n", array_rectangulares[i], aux_num_rectangulares);
    }

    printf("\n");
    printf("    El area total de las pizzas redondas es      : %.2f \n", aux_num_redondas);
    printf("    El area total de las pizzas rectangulares es : %.2f \n", aux_num_rectangulares);

    if (aux_num_rectangulares < aux_num_redondas)
    {
        printf("\n    El area total de las pizzas redondas es superior");
    }
    else
    {
        printf("\n    El area total de las pizzas rectangulares es superior");
    }

    return (0);
}