#include<stdio.h>

void main()
{

/*char* n_endptr;

char* n_str = readline();

int n = strtol(n_str, &n_endptr, 10);*/

    int number = 0;
    
    printf("\n");
    printf("    Imput a number \n");
    scanf("%d", &number);

    if (number == 1){
        printf("\n");
        printf("one");
        printf("\n");
    } else if (number == 2){
        printf("\n");
        printf("two");
        printf("\n");
    } else if (number == 3){
        printf("\n");
        printf("three");
        printf("\n");
    } else if (number == 4){
        printf("\n");
        printf("four");
        printf("\n");
    } else if (number == 5){
        printf("\n");
        printf("five");
        printf("\n");
    } else if (number == 6){
        printf("\n");
        printf("six");
        printf("\n");
    } else if (number == 7){
        printf("\n");
        printf("seven");
        printf("\n");
    } else if (number == 8){
        printf("\n");
        printf("eight");
        printf("\n");
    } else if (number == 9){
        printf("\n");
        printf("nine");
        printf("\n");
    } else if (number < 9){
        printf("\n");
        printf("Greater than 9");
        printf("\n");
    } 
    printf("\n");

}