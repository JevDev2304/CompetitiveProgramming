#include <iostream>
#include <string>

using namespace std;

int main()
{
    string primer_digito;
    int numero;
    cout << "Digite un número: ";
    cin >> numero;
    switch (numero)
    {
    case 1:
        primer_digito = "I";
        break;
    case 2:
        primer_digito = "II";
        break;
    case 3:
        primer_digito = "III";
        break;
    case 4:
        primer_digito = "IV";
        break;
    case 5:
        primer_digito = "V";
        break;
    case 6:
        primer_digito = "VI";
        break;
    default:
        primer_digito = "error";
        break;
    }

    cout << "\n"
         << primer_digito;
    return 0;
}