/*
Determinar el cuadrado, el doble y el resultado de sumar éstas cantidades,
para un número ingresado por el usuario.
*/

#include <iostream>

using namespace std;

int main()
{
    float x, cuadrado, doble, suma; // utilizo el float para que puedas calcular lo que quieras jajaj
    cout << "ingresa el número: ";
    cin >> x;
    cuadrado = x * x;
    doble = x * 2;
    suma = cuadrado + doble;
    cout << "el cuadrado = " << cuadrado << endl;
    cout << "el doble = " << doble << endl;
    cout << "la suma de estos es = " << suma;
    return 0;
}