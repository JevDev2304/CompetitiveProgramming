/*
Calcule la raíz cuadrada de un número.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, raiz;
    cout << "Ingresa le numero para sacarle la raiz cuadrada: ";
    cin >> x;
    raiz = pow(x, 1.0f / 2.0f);
    cout << raiz;
    return 0;
}