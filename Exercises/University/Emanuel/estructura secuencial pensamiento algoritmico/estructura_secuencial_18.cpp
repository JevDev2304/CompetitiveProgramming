/*
Se ingresan tres cantidades, una en soles, otra en dólares y finalmente una en
euros, determine el total del dinero en marcos si se sabe que:
1 dólar = 3.56 soles
1 dólar = 1.11 euros
1 dólar = 2.12 marcos
*/

#include <iostream>

using namespace std;

int main()
{
    float soles, dolares, euros;
    cout << "Ingrese la cantidad de soles: ";
    cin >> soles;
    cout << "Ingese la cantidad de dolares: ";
    cin >> dolares;
    cout << "Ingrese la cantidad de euros: ";
    cin >> euros;
    soles = (soles * 2.12) / 3.56;
    dolares = (dolares * 2.12);
    euros = (euros * 2.12) / 1.11;
    cout << "soles a marcos = " << soles;
    cout << "\ndolares a marcos = " << dolares;
    cout << "\neuros a marcos = " << euros;
    return 0;
}