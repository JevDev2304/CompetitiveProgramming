/*
A la mama de Juan le preguntan su edad y contesta: tengo 3 hijos, pregúntele
a Juan su edad. Alberto tiene 2/3 de la edad de Juan, Ana tiene 4/3 de la
edad de Juan y mi edad es la suma de las tres. Hacer un algoritmo que
muestre la edad de los cuatro.
*/

#include <iostream>

using namespace std;

int main()
{
    float mama, juan, alberto, ana;
    cout << "Ingresa la edad de juan";
    cin >> juan;
    alberto = (juan)*2 / 3;
    ana = (juan)*4 / 3;
    mama = juan + alberto + ana;
    cout << "mama " << mama << endl;
    cout << "juan " << juan << endl;
    cout << "alberto " << alberto << endl;
    cout << "ana " << ana << endl;
    return 0;
}