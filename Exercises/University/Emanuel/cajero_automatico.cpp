// Haz un programa que sigmule un cjero automático con un saldo inicial de 100 dólares

#include <iostream>

using namespace std;

int main()
{
    float saldo = 100, cantidad_ingresar, cantidad_retirar;
    int opcion, contraseña = 12345, comprobar_contraseña;
    cout << "Ingresa tu contraseña: ";
    cin >> comprobar_contraseña;
    if (contraseña == comprobar_contraseña)
    {
        cout << "\fBienvenido a su cajero virtual: " << endl;
        cout << "su saldo actula es: " << saldo;
        cout << "\n1. Ingresar dinero en cuenta.";
        cout << "\n2. Retirar dinero de la cuenta.";
        cout << "\n3. Salir.";

        while (true)
        {
            cin >> opcion;

            switch (opcion)
            {
            case 1:
                cout << "ingrese la cantidad de dinero que va a ingresar a la cuenta: ";
                cin >> cantidad_ingresar;
                saldo = saldo + cantidad_ingresar;
                break;
            case 2:
                cout << "ingrese la cantidad de dinero que va a retirar de la cuenta: ";
                cin >> cantidad_retirar;
                if (cantidad_retirar <= saldo)
                {
                    saldo = saldo - cantidad_retirar;
                }
                else
                {
                    cout << "No tienes esa cantidad de dinero. Una cosa es ser pobre otra cosa es no saber restar.";
                }
                break;
            case 3:
                return 0;
            default:
                cout << "Opción no válida";
                break;
            }
            cout << "su saldo actual es: " << saldo << endl;
        }
    }
    else
    {
        cout << "\nfuera de aquí impostor";
    }

    return 0;
}