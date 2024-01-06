#include <iostream>

int gameWithCells(int filas, int col){
    int result = 0;
    while(col > 0){

        if((col - 2) >= 0){
            col -= 2;
        }

        else{
            col -= 1;
        }
        
        result += filas / 2;
        
        if(filas % 2 != 0){
            result++;
        }
    }
    return result;
}

int main(){
    int n, m;
    std::cin >> n >> m;

    std::cout << gameWithCells(n, m) << std::endl;
    return 0;
}