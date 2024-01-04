#include <iostream>

using namespace std;

int ans(int);

int main()
{
    int n;
    cin >> n;
    int limite[n];

    for (int i = 0; i < n; i++)
    {
        cin >> limite[i];
    }

    for (int y = 0; y < n; y++)
    {
        cout << ans(limite[y]) << endl;
    }

    return 0;
}

int ans(int limite)
{
    int fibonacci[] = {1,2}, aux = 1, suma = 2;// 1,2,3,5,8,13,21...
    
    while (fibonacci[1] < limite)
    {
        fibonacci[0] = fibonacci[1];
        fibonacci[1] += aux;
        aux = fibonacci[0];
        if (fibonacci[1] % 2 == 0 && fibonacci[1] <= limite)
        {
            suma += fibonacci[1];
        }
    }
    return suma;
}