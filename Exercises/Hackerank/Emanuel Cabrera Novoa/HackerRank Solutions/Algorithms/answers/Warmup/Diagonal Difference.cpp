#include <iostream>
#include <vector>

int diagonalDifference(std::vector<std::vector<int>> vec, int size){
    int diagonal[2], aux = 0;
    for(int i = 0; i < size; ++i){
        aux += vec[i][i];
    }
    diagonal[0] = aux;

    aux = 0;
    for(int fila = 0, columna = size - 1; fila < size; ++fila, --columna){
        aux += vec[fila][columna];
    }
    diagonal[1] = aux;

    return abs(diagonal[0] - diagonal[1]);
}

int main(){
    int n;
    std::cin >> n;
    
    std::vector<std::vector<int>> vec(n, std::vector<int>(n));

    for(int fila = 0; fila < n; ++fila){
        for(int columna = 0; columna < n; ++columna){
            std::cin >> vec[fila][columna];
        }
    }
    
    std::cout << diagonalDifference(vec, n) << std::endl;
    return 0;
}