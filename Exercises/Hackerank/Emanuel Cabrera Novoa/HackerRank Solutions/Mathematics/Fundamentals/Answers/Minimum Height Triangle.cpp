#include <iostream>

int lowestTriangle(int base, int area){
    float aux = ((float)area / base) * 2;
    bool filtro = aux == (int)aux;

    return filtro ? (int)aux : (int)aux + 1;
}
int main(){
    int b, a;
    std::cin >> b >> a;
    std::cout << lowestTriangle(b, a) << std::endl;
    return 0;
}