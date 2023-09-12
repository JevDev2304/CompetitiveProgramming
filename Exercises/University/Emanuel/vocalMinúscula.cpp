// Escriba un programa que lea de la entrada estándar un carácter
// en la salidad estándar si el carácter es una volcal minúscula o no.

#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "ingresa el caracter: ";
    cin >> x;
    switch (x)
    {
    case 'a':
        cout << "Cumple con las condiciones";
        break;
    case 'e':
        cout << "Cumple con las condiciones";
        break;
    case 'i':
        cout << "Cumple con las condiciones";
        break;
    case 'o':
        cout << "Cumple con las condiciones";
        break;
    case 'u':
        cout << "Cumple con las condiciones";
        break;

    default:
        cout << "no cumple con las condiciones";
        break;
    }
}