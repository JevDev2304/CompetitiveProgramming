#include <iostream>
#include <algorithm>

int getTotalX(int a[], int b[], int size_a, int size_b){
    bool filtro_superior = true;
    bool filtro_inferior = true;
    int answer = 0;
    int borrar;
    int aux1;
    for(int number = a[size_a - 1]; number <= b[size_b - 1]; number += a[size_a - 1]){
        for(int it_a = 0; it_a < size_a; ++it_a){
            
            if(number % a[it_a] != 0){
                filtro_superior = false;
                break;
            }
        }
        if(filtro_superior){
            for(int it_b = 0; it_b < size_b; ++it_b){
                aux1 = b[it_b];
                borrar = aux1 % number;
                if(borrar != 0){
                    filtro_inferior = false;
                    break;
                }
            }

            if(filtro_inferior){
                answer++;
            }
            else{
                filtro_inferior = true;
            }
        }
        else{
            filtro_superior = true;
        }
    }
    
    return answer;
}

int main(){
    int m, n;
    std::cin >> m >> n;
    int a[m], b[n];

    for(int i = 0; i < m; ++i){
        std::cin >> a[i];
    }
    for(int j = 0; j < n; ++j){
        std::cin >> b[j];
    }
    
    std::cout << getTotalX(a, b, m, n) << std::endl;
    return 0;
}