/*
Intercambiar el valor de dos variables, es decir, el valor de la variable A
asignársela a la variable B, y el valor de B asignársela a la variable A.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    cout << "ingrese el valor de la primera variable: ";
    cin >> a;
    cout << "ingrese el valor de la segunda variable: ";
    cin >> b;
    aux = a;
    a = b;
    b = aux;
    cout << "el valor de la primera varialbe ahora es: " << a << endl;
    cout << "el valor de la segunda variable ahora es: " << b;
    return 0;
}