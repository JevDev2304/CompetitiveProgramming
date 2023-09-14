/*
Un alumno desea saber cuál será su calificación al final de la materia
algoritmos y estructuras de datos I. Dicha calificación se compone de los
siguientes porcentajes: 55% del promedio de sus tres prácticas calificadas,
30% de la calificación del examen final y 15% de la calificación de un proyecto
final.
*/
#include <iostream>

using namespace std;

int main()
{
    float practica1, practica2, practica3, examen_final, proyecto_final,
        cincuentaycinco, quince, treinta, nota_final;
    cout << "ingresa la calificacion de la primera practica: ";
    cin >> practica1;
    cout << "ingresa la calificacion de la segunda practica: ";
    cin >> practica2;
    cout << "ingresa la calificacion de la tercera practica: ";
    cin >> practica3;
    cincuentaycinco = ((practica1 + practica2 + practica3) / 3.0f) * (55.0f / 100.0f);
    cout << "55 es = " << cincuentaycinco << endl;
    cout << "ingresa la calificacion del examen final: ";
    cin >> examen_final;
    treinta = examen_final * (3.0f / 10.0f);
    cout << "30 es = " << treinta << endl;
    cout << "ingrsea la calificacion del proyecto final: ";
    cin >> proyecto_final;
    quince = proyecto_final * (15.0f / 100.0f);
    cout << "15 = " << quince << endl;
    nota_final = cincuentaycinco + treinta + quince;
    cout << "la nota final es: " << nota_final;
    return 0;
}