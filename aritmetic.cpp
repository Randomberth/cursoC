#include <stdio.h>

int main()
{
    int dato1 = 0, dato2 = 0, resp= 0;
    dato1 = 15;
    dato2 = 33;

    //suma 
    resp = dato1 + dato2;
    printf("%d + %d = %d\n", dato1, dato2, resp);

    //resta
    resp = dato1 - dato2;
    printf("%d - %d = %d\n", dato1, dato2, resp);

    //producto
    resp = dato1 * dato2;
    printf("%d * %d = %d\n", dato1, dato2, resp);

    //cociente
    resp = dato1 / dato2;
    printf("%d / %d = %d\n", dato1, dato2, resp);

    //modulo
    resp = dato1 % dato2;
    printf("%d mod %d = %d\n", dato1, dato2, resp);

return 0;

}