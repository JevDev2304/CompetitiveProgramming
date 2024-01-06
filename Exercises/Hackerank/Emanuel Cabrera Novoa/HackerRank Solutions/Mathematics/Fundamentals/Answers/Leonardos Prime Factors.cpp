#include <iostream>
#include <vector>

int solution(unsigned long long number){
    std::vector<int> primos;
    bool filtro = true;
    int resultado = 0;
    unsigned long long multiplicacion = 1;
    
    if(number == 1){
        return 0;
    }
    
    if(number < 2){
        return 1;
    }

    for(unsigned long i = 2; i <= number; ++i){
        for(auto it : primos ){
            if(i % it == 0){
                filtro = false;
                break;
            }
        }
        if(filtro){
            primos.push_back(i);
            multiplicacion *= i;
            if(multiplicacion <= number){
                resultado++;
            }
            else{
                break;
            }
        }
        else{
            filtro = true;
        }
    }
    return resultado;
}

int main(){
    long q;
    std::cin >> q;
    unsigned long long arr[q];

    for(long i = 0; i < q; ++i){
        std::cin >> arr[i];
    }

    for(int j = 0; j < q; ++j){
        std::cout << solution(arr[j]) << std::endl;
    }

    return 0;
}