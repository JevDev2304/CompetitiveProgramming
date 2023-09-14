/*
Se posee un monto de dinero de $120, se gasta en supermercado $49,5 y
luego en verdulería 12,10. Mostrar el saldo
*/
#include <iostream>

using namespace std;

int main()
{
    int monto_inicial = 120;
    float supermercado = 49.5, verduleria = 12.10, saldo_final;
    saldo_final = monto_inicial - (supermercado + verduleria);
    cout << "saldo final es = " << saldo_final;
    return 0;
}
