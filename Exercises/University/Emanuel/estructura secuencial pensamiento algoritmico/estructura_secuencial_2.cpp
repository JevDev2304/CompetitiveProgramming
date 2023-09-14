/*
Calcular el área y el perímetro de un rectángulo dado sus longitudes (largo y
ancho).
*/

#include <iostream>

using namespace std;

int main()
{
    float area, perimetro, largo, ancho;
    cout << "Ingrese el ancho: ";
    cin >> ancho;
    cout << "Ingrese el largo: ";
    cin >> largo;
    area = largo * ancho;
    perimetro = 2 * largo + 2 * ancho;
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro;
    return 0;
}