/*
Dado un número natural de tres cifras, diseñe un algoritmo que permita
obtener la suma de sus números extremos y además el número invertido.
Ejemplo, si se ingresa el 273, se debe imprimir 5 y 372.
*/
#include <iostream>

using namespace std;

int main()
{
    int n1, unidades, decenas, centenas, n1div, suma_extremos;
    cout << "ingrese el número";
    cin >> n1;
    unidades = n1 % 10;
    n1div = n1 / 10;
    decenas = n1div % 10;
    n1div = n1div / 10;
    centenas = n1div % 10;
    suma_extremos = unidades + centenas;
    cout << "suma extremos = " << suma_extremos;
    cout << "\nnumero invertido = " << unidades << decenas << centenas;
    return 0;
}