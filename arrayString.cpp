#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int vector1[10] = {32, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    string vector2[5] = {
        "Keysi",
        "Eva",
        "Venesia",
        "Franyeli",
        "Giselle"};

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            printf("\n");
            printf("    el valor en la posición %d es %s", i, vector2[i].c_str());
            printf("\n");
        }
        else
        {
            printf("    el valor en la posición %d es %s", i, vector2[i].c_str());
            printf("\n");
        }
    }
    printf("\n");

    return (0);
}