#include <stdio.h>

int main()
{
    char bitleft = 50, bitright = 50, bittand = 125, bittor = 92, bitxor = 35, bittnot = 171, test = 64;

    /////// OPERADOR DESPLAZAR UN BIT A LA IZQUIERDA /////////
    printf("\n");
    printf("    OPERADOR DESPLAZAR UN BIT A LA IZQUIERDA \n");
    printf("    valor ASCII inicial : %c \n", bitleft);
    bitleft = bitleft << 1;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", bitleft);
    printf("    cuyo valor ASCII es : %d", bitleft);
    printf("\n \n");

    /////// OPERADOR DESPLAZAR UN BIT A LA DERECHA /////////
    printf("\n");
    printf("    OPERADOR DESPLAZAR UN BIT A LA DERECHA \n");
    printf("    valor ASCII inicial : %c \n", bitright);
    bitright = bitright >> 1;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", bitright);
    printf("    cuyo valor ASCII es : %d", bitright);
    printf("\n \n");

    /////// OPERADOR AND A NIVEL DE BITS /////////
    printf("\n");
    printf("    OPERADOR AND A NIVEL DE BITS \n");
    printf("    valor ASCII inicial : %c \n", bittand);
    bittand = bittand & test;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", bittand);
    printf("    cuyo valor ASCII es : %d", bittand);
    printf("\n \n");

    /////// OPERADOR OR A NIVEL DE BITS /////////
    printf("\n");
    printf("    OPERADOR OR A NIVEL DE BITS \n");
    printf("    valor ASCII inicial : %c \n", bittor);
    bittor = bittor | test;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", bittor);
    printf("    cuyo valor ASCII es : %d", bittor);
    printf("\n \n");

    /////// OPERADOR XOR ^ A NIVEL DE BITS /////////
    printf("\n");
    printf("    OPERADOR XOR A NIVEL DE BITS \n");
    printf("    valor ASCII inicial : %c \n", bitxor);
    bitxor = bitxor ^ test;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", bitxor);
    printf("    cuyo valor ASCII es : %d", bitxor);
    printf("\n \n");

    /////// OPERADOR COMPLEMENTO ~ A NIVEL DE BITS /////////
    printf("\n");
    printf("    OPERADOR XOR A NIVEL DE BITS \n");
    printf("    valor ASCII inicial : %c \n", bittnot);
    bittnot = ~bittnot;
    printf("\n");
    printf("    desplazamiento de bits resultó en : %c", bittnot);
    printf("    cuyo valor ASCII es : %d", bittnot);
    printf("\n \n");

    return (0);
}