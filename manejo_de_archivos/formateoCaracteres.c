#include<stdio.h>

int main()
{
    char one;
    char chain[100] , frase[100];
    
    printf("ingrese 'C' : \n" );
    scanf("%c", &one);
    printf("ingrese 'Language' : \n");
    scanf("%s", chain);
    printf("ingrese 'Welcome To C!!' \n:");
    scanf("\n"); 
    scanf("%[^\n]%*c", frase);
    
    
    printf("\n");
    printf("%c", one);
    printf("\n");
    printf("%s", chain);
    printf("\n");
    printf("%s", frase);
    printf("\n"); 
    printf("\n"); 
    return 0;
}