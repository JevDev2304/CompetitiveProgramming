/*Escriba un progrma que solicite una edad e indique en la
salida estándar si la edad introducida está en el rango [18-25]*/

#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "ingrese la edad: ";
    cin >> edad;
    if ((edad >= 18) && (edad <= 25))
    {
        cout << "cumples las condiciones";
    }
    else
    {
        cout << "no cumples las condiciones";
    }
    return 0;
}