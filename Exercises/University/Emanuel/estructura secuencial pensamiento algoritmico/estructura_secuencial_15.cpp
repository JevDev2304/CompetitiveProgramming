/*
Dado un número natural de dos cifras, diseñe un algoritmo que permita
obtener el número invertido. Ejemplo, si se ingresa el número 23 que se
muestre el 32.
*/

#include <iostream>

using namespace std;

int main()
{
    int n1, unidades, decenas, n_reducido;
    cout << "ingresa un número de dos cifras: ";
    cin >> n1;
    unidades = n1 % 10;
    n_reducido = n1 / 10;
    cout << unidades << endl;
    decenas = n_reducido % 10;
    cout << decenas << endl;
    cout << unidades;
    cout << decenas;
    return 0;
}