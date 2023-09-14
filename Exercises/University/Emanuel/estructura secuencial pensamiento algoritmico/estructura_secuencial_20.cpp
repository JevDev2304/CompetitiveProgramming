/*
Un vendedor recibe un sueldo base más un 10% extra por comisión de sus
ventas efectuadas en el mes. El vendedor desea saber cuánto dinero en total
obtendrá por las ventas que realiza al mes. Desarrolle un algoritmo para
ingresar los datos y mostrar el sueldo neto.
*/
#include <iostream>
using namespace std;

int main()
{
    float salario_base, salario_final, total_de_ventas, porcentaje_comision;
    cout << "ingrese el salario base: ";
    cin >> salario_base;
    cout << "ingrese la cantidad de ventas en el mes: ";
    cin >> total_de_ventas;
    porcentaje_comision = total_de_ventas * 0.1;
    salario_final = salario_base + porcentaje_comision;
    cout << "El salario neto es = " << salario_final;
    return 0;
}