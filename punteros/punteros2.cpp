#include <stdio.h>
#include <math.h>

int main()
{
    double *p = NULL, d = 0, x = 100;
    p = &x;

    d = sqrt(x) + *p;

    printf("\n");
    printf("    valor : %g", *p);
    printf("    valor : %.2f", d);
    printf("\n \n");

    return (0);
}