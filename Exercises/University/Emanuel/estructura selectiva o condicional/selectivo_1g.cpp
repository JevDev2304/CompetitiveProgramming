/*
Diseñe un algoritmo que lea tres números enteros, determine el promedio
de los números e indique cuál es el número más cercano al promedio.
*/
#include <iostream>

using namespace std;

float absFloat(float operacion)
{
    float abs = operacion;
    if (operacion < 0)
    {
        abs = -1 * operacion;
    }
    return abs;
}

int main()
{
    int n1, n2, n3;
    float promedio, abs_n1, abs_n2, abs_n3;
    cout << "ingresa el primer numero: ";
    cin >> n1;
    cout << "ingresa el segundo numero: ";
    cin >> n2;
    cout << "ingresa el tercer numero: ";
    cin >> n3;
    promedio = (n1 + n2 + n3) / 3.0f;
    cout << "el promedio es: " << promedio << endl;
    abs_n1 = absFloat(promedio - n1);
    abs_n2 = absFloat(promedio - n2);
    abs_n3 = absFloat(promedio - n3);

    if (abs_n1 <= abs_n2)
    { // n1 es menor que n2
        if (abs_n1 <= abs_n3)
        {
            cout << "el mas cercano al promedio es: " << n1;
        }
        else
        {
            cout << "el mas cercano al promedio es: " << n3;
        }
    }
    else
    {
        if (abs_n2 <= abs_n3)
        {
            cout << "el mas cercano al promedio es: " << n2;
        }
        else
        {
            cout << "el mas cercano al promedio es: " << n3;
        }
    }

    return 0;
}