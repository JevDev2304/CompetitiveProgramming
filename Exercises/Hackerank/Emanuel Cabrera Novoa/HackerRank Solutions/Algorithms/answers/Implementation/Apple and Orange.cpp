/*
s = punto de partida de la ubicacion de la casa de sam
t = ubicacion final de la ubicacion de la casa de sam
a = ubicacion del manzano
b = ubicacion del naranjo
apples = distancia a las que caen las manzanas del arbol
oranges = distancia a las que caen las naranjas del arbol
m = cantidad de manzanas
n = cantidad de naranjas
*/

#include <iostream>

int m, n;

int* near_the_house
(int s, int t, int a, int b, int apples[], int oranges[])
{
    int * result = new int[2] {0, 0};
    

    for(int i = 0; i < m; ++i){
        if((apples[i] + a) >= s && (apples[i] + a) <= t){
            result[0]++;
        }
    }

    for(int l = 0; l < n; ++l){
        if((oranges[l] + b) >= s && (oranges[l] + b) <= t){
            result[1]++;
        }
    }

    return result;
}

int main(){
    int s, t;
    std::cin >> s >> t;
    int a, b;
    std::cin >> a >> b;
    
    std::cin >> m >> n;
    int manzanas[m], naranjas[n];

    for(int i = 0; i < m; ++i){
        std::cin >> manzanas[i];
    }

    for(int j = 0; j < n; ++j){
        std::cin >> naranjas[j];
    }

    int* answer = near_the_house(s, t, a, b, manzanas, naranjas);

    for(int h = 0; h < 2; ++h){
        std::cout << answer[h] << std::endl;
    }
    return 0;
}