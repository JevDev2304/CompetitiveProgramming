/*
Determinar si un número entero ingresado por el usuario es: par, múltiplo
de 7 o su última cifra es 3.
*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "ingrese el numero: ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << x << " es par." << endl;
    }
    else
    {
        cout << x << " no es par." << endl;
    }

    if (x % 7 == 0)
    {
        cout << x << " es multiplo de 7." << endl;
    }
    else
    {
        cout << x << " no es multiplo de 7." << endl;
    }

    if (x % 10 == 3)
    {
        cout << "la ultima cifra de " << x << " es 3." << endl;
    }
    else
    {
        cout << "la ultima cifra de " << x << " no es 3." << endl;
    }
    return 0;
}