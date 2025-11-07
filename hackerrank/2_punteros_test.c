#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int a_aux = *a;
    *a = *a + *b;
    *b = abs(a_aux - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    printf("\n");
    printf("    Ingrese valor a evaluar 1 : ");
    scanf("%d", &a);
    printf("    Ingrese valor a evaluar 2 : ");
    scanf("%d", &b);
    update(pa, pb);
    printf("\n");
    printf("    suma de a + b : %d \n\n", a);
    printf("    Valor absoluto entre a y b : %d", b);
    printf("\n \n");

    return 0;
}