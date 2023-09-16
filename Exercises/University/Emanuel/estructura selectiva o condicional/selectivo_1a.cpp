/*
Determinar si un número es positivo o negativo.
*/
#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "ingrese el número: ";
    cin >> x;
    if (x < 0)
    {
        cout << "el número es negativo";
    }
    else if (x > 0)
    {
        cout << "el número es positivo";
    }
    else if (x == 0)
    {
        cout << "pues es cero, que te puedo decir";
    }
    return 0;
}