#include <iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int limite[n];
    for (int i = 0; i < n; i++)
    {
        cin >> limite[i];
    }

    for (int j = 0; j < n; j++)
    {
        int suma = 0;
        int tres_veces = (limite[j] - 1) / 3;
        int cinco_veces = (limite[j] - 1) / 5;
        for (int l = 1; l <= tres_veces; l++)
        {
            if (l % 5 != 0)
            {
                suma += 3 * l;
            }
        }
        for (int a = 1; a <= cinco_veces; a++)
        {
            suma += 5 * a;
        }
        cout << suma << endl;
    }
    return 0;
}