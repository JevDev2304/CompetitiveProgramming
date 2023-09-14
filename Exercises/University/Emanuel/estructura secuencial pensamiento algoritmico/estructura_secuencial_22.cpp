/*
En un hospital existen tres áreas: Ginecología, pediatria y traumatología.
El presupuesto del hospital se reparte de la siguiente forma:
Ginecología = 40%
Pediatría = 30%
Traumatología = 30%
Obtener y mostrar la cantidad de dinero que recibirá cada área para cualquier
monto de presupuesto.
*/

#include <iostream>
using namespace std;

int main()
{
    float monto, ginecologia, pediatria, traumatologia;
    cout << "ingrese el monto del presupuesto = ";
    cin >> monto;
    ginecologia = monto * 0.4;
    pediatria = monto * 0.3;
    traumatologia = monto * 0.3;
    cout << "a ginecologia le corresponde: " << ginecologia;
    cout << "\na pediatria le corresponde: " << pediatria;
    cout << "\na traumatologia le corresponde: " << traumatologia;
    return 0;
}