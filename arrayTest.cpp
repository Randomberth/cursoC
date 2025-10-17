#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    string testpersona[10];

    cout << " " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "   Ingrese valor " << i << " : ";
        cin >> testpersona[i];
    }

    cout << " " << endl;
    for (int i = 1; i < 10; i++)
    {
        cout << "   valor en posicion " << i << " es : " << testpersona[i] << endl;
    }
    cout << "";
    return (0);
}