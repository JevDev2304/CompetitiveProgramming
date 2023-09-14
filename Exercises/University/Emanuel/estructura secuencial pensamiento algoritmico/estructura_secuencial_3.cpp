/*
Hallar el área de un triángulo, conocidas su base y su altura.
*/
#include <iostream>

using namespace std;

int main()
{
    float base, altura, area;
    cout << "ingresa la base del triangulo: ";
    cin >> base;
    cout << "ingresa la altura del triangulo: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "el area es: " << area;
    return 0;
}