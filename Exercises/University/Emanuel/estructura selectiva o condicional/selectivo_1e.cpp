/*
Determinar si un número es divisor de otro, ambos números son ingresados
por el usuario
*/
#include <iostream>

using namespace std;

int main()
{
    int numerador, denominador;
    cout << "ingresa el dividendo: ";
    cin >> numerador;
    cout << "ingresa el divisor: ";
    cin >> denominador;
    if (numerador % denominador == 0)
    {
        cout << numerador << " si es divisible entre " << denominador;
    }
    else
    {
        cout << numerador << " no es divisible entre " << denominador;
    }
    return 0;
}