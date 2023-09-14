/*
Una institución educativa ha recibido una donación especial que será
repartida entre las carreras de telecomunicaciones, sistemas, administración
y contabilidad de la siguiente forma:
Telecomunicaciones: 20% de sistemas
Sistemas: 15% de administración
Administración: 30% de la donación
Diseñe un algoritmo que determine cuanto recibirá cada carrera.
*/

#include <iostream>

using namespace std;

int main()
{
    float donacion, porcentaje_sistemas = 15.0f / 100.0f, porcentaje_adminisracion = 30.0f / 100.0f,
                    porcentaje_telecomunicaciones = 20.0f / 100.0f, porcentaje_contabilidad = 35.0f / 100.0f;
    cout << "ingrese la cantidad de la donación: ";
    cin >> donacion;
    porcentaje_sistemas = porcentaje_sistemas * donacion;
    porcentaje_adminisracion = porcentaje_adminisracion * donacion;
    porcentaje_telecomunicaciones = porcentaje_telecomunicaciones * donacion;
    porcentaje_contabilidad = porcentaje_contabilidad * donacion;
    cout << "sistemas = " << porcentaje_sistemas;
    cout << "\nadministracion = " << porcentaje_adminisracion;
    cout << "\ntelecomunicaciones = " << porcentaje_telecomunicaciones;
    cout << "\ncontabilidad = " << porcentaje_contabilidad;

    return 0;
}