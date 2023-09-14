/*
Se ingresa las edades de tres hermanos, Luís, Juana y Ana y el monto a
repartir. Implemente un algoritmo que permita encontrar las cantidades
repartidas proporcionalmente según las edades de los tres hermanos.
*/

#include <iostream>

using namespace std;

int main()
{
    int luis, juana, ana, suma, monto;
    float parte_luis, parte_juana, parte_ana;
    cout << "ingrese la edad de luis: ";
    cin >> luis;
    cout << "ingrese la edad de juana: ";
    cin >> juana;
    cout << "ingrese la edad de ana: ";
    cin >> ana;
    suma = luis + juana + ana;
    cout << "ingrese el monto: ";
    cin >> monto;
    parte_luis = (static_cast<float>(luis) / suma) * monto;
    cout << "monto luis = " << parte_luis;
    parte_juana = (static_cast<float>(juana) / suma) * monto;
    cout << "\nmonto juan = " << parte_juana;
    parte_ana = (static_cast<float>(ana) / suma) * monto;
    cout << "\nmonto ana = " << parte_ana;
    return 0;
}