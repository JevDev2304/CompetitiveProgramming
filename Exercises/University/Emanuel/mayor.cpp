#include <iostream>

using namespace std;

int main()
{
    float n1, n2;
    cout << "ingrese el primer número: ";
    cin >> n1;
    cout << "ingrese el segundo número: ",
        cin >> n2;
    if (n1 > n2)
    {
        cout << n1 << " es el mayor";
    }
    else
    {
        cout << n2 << " es el mayor";
    }
    return 0;
}