#include<stdio.h>

int main()
{
    int sum1 = 3, sum2 = 4, sum3 = 6, sum4 = 5;
    int resp1 = 0, resp2 = 0, resp = 0;


    resp1 = (sum1 > sum2) ? sum1 : sum2;
    resp2 = (sum3 > sum4) ? sum3 : sum4;
    resp = (resp1 > resp2) ? resp1 : resp2;


    printf("\n");
    printf("    %d", resp);
    printf("\n");


    return 0;
}