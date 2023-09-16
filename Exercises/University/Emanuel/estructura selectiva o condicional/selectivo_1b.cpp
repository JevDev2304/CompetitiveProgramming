/*
 Establecer cuál es mayor de dos números
*/
#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout << "ingrese n1: ";
    cin >> n1;
    cout << "ingrese n2: ";
    cin >> n2;
    if (n1 < n2)
    {
        cout << n2 << " es el numero mayor";
    }
    else if (n2 < n1)
    {
        cout << n1 << " es el numero mayor";
    }
    else
    {
        cout << "los número son iguales";
    }
    return 0;
}