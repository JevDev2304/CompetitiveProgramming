/*
El dueño de una tienda compra un artículo a un precio determinado. Mostrar
el precio en que lo debe vender para obtener una ganancia del 30%
*/

#include <iostream>
using namespace std;

int main()
{
    float precio_final, precio_inicial;
    cout << "ingrese el precio original del articulo: ";
    cin >> precio_inicial;
    precio_final = precio_inicial + (precio_inicial * 0.3);
    cout << "lo debes vender a: " << precio_final;
    return 0;
}