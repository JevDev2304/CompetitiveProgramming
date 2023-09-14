/*
Hacer un algoritmo para ingresar el dinero invertido por tres personas para
formar una empresa. Cada una de ellas invierte una cantidad distinta. Se pide
imprimir el porcentaje que cada quien invierte con respecto al total de la
inversión.
*/
#include <iostream>

using namespace std;

int main()
{
    float persona1, persona2, persona3, total;
    cout << "ingrese la cantidad invertida del primer sujeto: ";
    cin >> persona1;
    cout << "ingrese la cantidad invertida del segundo sujeto: ";
    cin >> persona2;
    cout << "ingrese la cantidad invertida del tercer sujeto: ";
    cin >> persona3;
    total = persona1 + persona2 + persona3;
    persona1 = (persona1 / static_cast<float>(total)) * 100;
    persona2 = (persona2 / static_cast<float>(total)) * 100;
    persona3 = (persona3 / static_cast<float>(total)) * 100;
    cout << "porcentaje primer sujeto = " << persona1 << "%";
    cout << "\nporcentaje segundo sujeto = " << persona2 << "%";
    cout << "\nporcentaje tercer sujeto = " << persona3 << "%";
    return 0;
}