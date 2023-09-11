// Programa para determinar si un número es entero o no.
#include <iostream>

int main()
{
    int n;
    std::cout << "Escriba el número entero que quiere saber";
    std::cin >> n;
    if (n % 2 == 0)
    {
        std::cout << n << " es par";
    }
    else
    {
        std::cout << n << " no es par";
    }
    return 0;
}