/*
Determine la temperatura en grados Fahrenheit a partir del valor en grados
centígrados. Dado por la siguiente ecuación: F=(9/5)C + 32
*/
#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, centigrado;
    cout << "Ingrese los grados centígrados: ";
    cin >> centigrado;
    fahrenheit = ((9.0f / 5.0f) * centigrado) + 32;
    cout << "el equivalente en grados fahrenheit es: " << fahrenheit;
    return 0;
}
