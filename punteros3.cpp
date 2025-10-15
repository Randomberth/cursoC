#include <stdio.h>

int main()
{
    int a = 10, *p, *q;
    p = &a;
    q = p;
    printf("\n");
    printf("En la dirección %x está el valor %d\n", q, *q);
    printf("En la dirección %x está el valor %d\n", p, *p);
    printf("\n \n");
    return (0);
}