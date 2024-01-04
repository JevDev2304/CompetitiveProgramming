#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    long n;
    cin >> n;
    bool criba[n-1];
    fill(criba, criba + (n-1), true);
    long iterador = 2, primos[n], contador = 0;

    do
    {
        if (criba[iterador - 2] == true)
        {
            primos[contador] = iterador;
            contador++;
            for (long i = (iterador - 2) + iterador; i < n-1; i += iterador)
            {
                if (criba[i] == true)
                {
                    criba[i] = false;
                }
            }
        }
        iterador++;
    }while (iterador <= n);

    for (long j = contador - 1; j >= 0 ; j--)
    {
        
        if (n % primos[j] == 0)
        {
            cout << primos[j];
            break;
        }
    }
    return 0;
}
