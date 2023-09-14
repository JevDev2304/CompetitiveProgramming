/*
Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre
su salario anterior.
*/
#include <iostream>
using namespace std;

int main()
{
    float salario_anterior, nuevo_salario, incremento = 25.0f / 100.0f;
    cout << "incremento =" << incremento << endl;
    cout << "ingresa el salario anterior: ";
    cin >> salario_anterior;
    nuevo_salario = salario_anterior + (salario_anterior * incremento);
    cout << "el nuevo salario deberia ser de: " << nuevo_salario;
    return 0;
}