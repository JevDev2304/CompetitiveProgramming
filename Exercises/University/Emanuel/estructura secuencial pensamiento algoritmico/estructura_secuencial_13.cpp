/*
Diseñe un programa que lea la cantidad de alumnos de redes, contabilidad y
diseño y determine el porcentaje de alumnos de cada uno de los cursos.
*/

#include <iostream>

using namespace std;

int main()
{
    int redes, contabilidad, diseno, total;
    float porcentaje_redes, porcentaje_contabilidad, porcentaje_diseno;
    cout << "ingrese la cantidad de alumnos en redes: ";
    cin >> redes;
    cout << "ingrese la cantidad de alumnos en contailidad: ";
    cin >> contabilidad;
    cout << "ingrese la cantidad de alumnos en diseno: ";
    cin >> diseno;
    total = redes + contabilidad + diseno;
    porcentaje_redes = (static_cast<float>(redes) / total) * 100;
    porcentaje_contabilidad = (static_cast<float>(contabilidad) / total) * 100;
    porcentaje_diseno = (static_cast<float>(diseno) / total) * 100;
    cout << "el porcenta de alumnos en redes es: " << porcentaje_redes << "%";
    cout << "\nel porcentaje de alumnos en contabilidad es: " << porcentaje_contabilidad << "%";
    cout << "\nel porcentaje de alumnos en diseno es: " << porcentaje_diseno << "%";
    return 0;
}