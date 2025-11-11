#include<stdio.h>

int main()
{
    int a = 8, b =11;

    for (int i = a; i <= b; i++)
    {
        if (i == 1){
            printf("one");
            printf("\n");
        } else if (i == 2){
            printf("two");
            printf("\n");
        } else if (i == 3){
            printf("three");
            printf("\n");
        } else if (i == 4){
            printf("four");
            printf("\n");
        } else if (i == 5){
            printf("five");
            printf("\n");
        } else if (i == 6){
            printf("six");
            printf("\n");
        } else if (i == 7){
            printf("seven");
            printf("\n");
        } else if (i == 8){
            printf("eight");
            printf("\n");
        } else if (i == 9){
            printf("nine");
            printf("\n");
        } else if ((i > 9) && (i%2 == 0)){
            printf("even");
            printf("\n");
        } else if ((i > 9) && (i%2 != 0)){
            printf("odd");
            printf("\n");
        } 
    
    }
    return 0;
}