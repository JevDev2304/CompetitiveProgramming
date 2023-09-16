/*
Determinar la nota final de un curso, con la siguiente evaluación: dos
seguimientos del 20% cada uno y dos exámenes (parcial y final) del 30%
cada uno. Si la nota es mayor o igual que 3.0 el estudiante gana la materia,
si la nota está entre 2.0 y 2.9 el estudiante tiene derecho a habilitar y
presenta un examen (la habilitación), si gana la habilitación entonces gana
la materia, en caso contrario pierde la materia.
*/
#include <iostream>
using namespace std;

int main()
{
    float seguimiento1, seguimiento2, examen_parcial, examen_final, porcentaje_seguimiento1,
        porcentaje_seguimiento2, porcentaje_parcial, porcentaje_final, nota;
    cout << "ingresa la nota del primer seguimiento: ";
    cin >> seguimiento1;
    cout << "ingresa la nota del segundo seguimiento: ";
    cin >> seguimiento2;
    cout << "ingresa la nota del parcial: ";
    cin >> examen_parcial;
    cout << "ingresa la nota del examen final: ";
    cin >> examen_final;
    porcentaje_seguimiento1 = seguimiento1 * 0.2;
    porcentaje_seguimiento2 = seguimiento2 * 0.2;
    porcentaje_parcial = examen_parcial * 0.3;
    porcentaje_final = examen_final * 0.3;
    nota = porcentaje_seguimiento1 + porcentaje_seguimiento2 + porcentaje_parcial + porcentaje_final;

    if (nota >= 3)
    {
        cout << "haz ganado la materia, tu nota fue: " << nota;
    }
    else if (nota >= 2 && nota < 3)
    {
        float habilitacion;
        cout << "tienes que habilitar";
        cout << "\ningresa la calificacion del examen de habilitacion";
        cin >> habilitacion;
        if (habilitacion >= 3)
        {
            cout << "felicidades has aprobado la materia";
        }
        else
        {
            cout << "Haz reprobado la materia";
        }
    }
    else if (nota < 2)
    {
        cout << "haz perdido tu materia y al ser menor de 2 la nota final no tienes derecho a habilitacion";
        cout << "\nnota final = " << nota;
    }
    return 0;
}