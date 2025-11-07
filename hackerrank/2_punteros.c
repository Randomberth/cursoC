#include<stdio.h>

void increment(int *v) {
        (*v)++; 
    }

int main() {

    int a;
    printf("\n");
    printf("    Ingrese valor a incrementar : ");
    scanf("%d", &a);
    printf("\n");
    increment(&a);
    printf("    %d", a);
    printf("\n \n");
    return 0;      
}     