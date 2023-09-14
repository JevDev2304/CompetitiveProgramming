/*
Determinar el pago semanal de un obrero que recibe $22.200 por hora
laborada dado que ha trabajado cierta cantidad de horas y tiene una
deducción del 10% de lo devengado por concepto de parafiscales.
*/
#include <iostream>

using namespace std;

int main()
{
    int pago_hora = 22200, horas_semanales_trabajadas, pago_parcial;
    float parafiscales = 1.0f / 10.0f, pago_final; // es necesario porner el .0 para que lo considere como un punto flotante
    // cuando se pone solo el 1 o el 10 entonces va hacer una division entera y el resultado será 0
    cout << "parafiscales = " << parafiscales << endl;
    cout << "Ingrese la cantidad de horas semanales trabajas: ";
    cin >> horas_semanales_trabajadas;
    pago_parcial = horas_semanales_trabajadas * pago_hora;
    pago_final = pago_parcial - (pago_parcial * parafiscales);
    cout << "el pago debe ser de: " << pago_final;
    return 0;
}