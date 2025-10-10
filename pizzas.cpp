#include <stdio.h>

int main()
{
    const double PI = 3.1416;

    double pizza1 = 0, pizza2 = 2, mediana = 0,
           areapizza1 = 0, areapizza2 = 0, arealitlepizzas = 0, areamediana = 0;

    printf("\n");
    printf("Valores pizzas individuales");
    printf("\n \n");

    printf("ingrese diametro de la primera pizza individual \n");
    scanf("%le", &pizza1);
    printf("\n");
    printf("ingrese diametro de la primera pizza individual \n");
    scanf("%le", &pizza2);
    printf("\n");
    printf("ingrese diametro de la pizza mediana \n");
    scanf("%le", &mediana);

    areapizza1 = ((pizza1 / 2) * (pizza1 / 2)) * PI;
    areapizza2 = (PI * ((pizza2 / 2) * (pizza2 / 2)));
    arealitlepizzas = (areapizza1 + areapizza2);

    areamediana = PI * (((mediana / 2) * (mediana / 2)));

    printf("\n area de pizza1: %.2f, area de pizza2: %.2f, area de pizza mediana: %.2f", areapizza1, areapizza2, areamediana);
    printf("\n");
    printf("\n \n El area de las dos pizzas pequeñas es : %.2f ", arealitlepizzas);
    printf("\n");
    printf("\n El area de la pizza mediana es : %.2f ", areamediana);
    printf("\n");

    if (arealitlepizzas == areamediana)
        printf("\n las dos opciones tiene el mismo tamaño\n \n");
    else if (arealitlepizzas < areamediana)
        printf("\n Compra la mediana porque tiene mas masa \n \n");
    else
        printf("\n compra las individuales, tienen mas masa\n \n");

    return (0);
}
