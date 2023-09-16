/*
Determina el valor de C, dada la expresión C=
√4-3x
3√5-6y
siendo "x" y "y" reales.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float c, x, y, numerador, denominador;
    cout << "ingresa el valor de x (el valor debe estar entre -infinito hasta 4/3): ";
    cin >> x;
    cout << "ingresa el valor de y (no puedes ingresar 5/6): ";
    cin >> y;
    numerador = sqrt(4 - (3 * x));   // saca raiz cuadrada
    denominador = cbrt(5 - (6 * y)); // saca raiz cubica
    cout << "denominador: " << denominador;
    cout << "\nnumerador: " << numerador;
    c = numerador / denominador;
    cout << "\nc = " << c;
    return 0;
}