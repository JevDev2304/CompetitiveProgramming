#include <iostream>
//un poquito de recursividad para el cuerpo sabroso

unsigned long long connectingTowns(int number_towns, unsigned int road[]){
    unsigned long long solution = 1;
    if(number_towns == 1){
        return 1;
    }
    else{
        solution *= *road * connectingTowns(number_towns - 1, road + 1);
        return solution % 1234567;
    }
}

int main(){
    int casos;
    std::cin >> casos;
    unsigned long long soluciones[casos];
    
    int towns; 
    for(int i = 0; i < casos; ++i){
        std::cin >> towns;
        unsigned int roads[towns - 1];
        
        for(int j = 0; j < towns - 1; ++j){
            std::cin >> roads[j];
        }

        soluciones[i] = connectingTowns(towns, roads);
    }

    for(int k = 0; k < casos; ++k){
        std::cout << soluciones[k] << std::endl;
    }

    return 0;
}