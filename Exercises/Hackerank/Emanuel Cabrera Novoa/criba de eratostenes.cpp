/*criba de erastotenes*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool criba[n-1];
    fill(criba, criba + (n-1), true); //de esta forma se llena un arreglo con un valor

    int iterador = 2;
    do
    {
        if (criba[iterador - 2] == true)
        {
            for (int i = (iterador - 2) + iterador ; i < n - 1; i += iterador)
            {
                if (criba[i] == true)
                {
                    criba[i] = false;
                }
            }
        }
        iterador++;
    }while (iterador <= n);

    for (int j = 0; j < n-1; j++)
    {
        if (criba[j] == true)
        {
            cout << j + 2 << " ";
        }
        else
        {
            cout << "--" << " ";
        }
    }
    return 0;
}
