#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    string persona[10] = {};
    int sumav[5] = {11, 22, 33, 44, 55};
    int resp = 0;

    // ingresar datos array
    for (int i = 0; i < 5; i++)
    {
        cout << "    Ingrese datos de la " << i << " persona : ";
        cin >> persona[i];
    }

    printf("\n");
    // mostrar datos
    for (int i = 0; i < 5; i++)
    {
        cout << "    persona " << i << " es : " << persona[i] << endl;
    }

    printf("\n");

    // sumar vector
    // mostrar datos
    for (int i = 0; i < 5; i++)
    {
        resp = sumav[i] + resp;
        //        cout << "    persona " << i << " es : " << persona[i] << endl;
    }

    printf("\n");
    printf("    resultado suma : %d", resp);

    return (0);
}