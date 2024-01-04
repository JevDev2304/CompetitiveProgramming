#include <iostream>

int birthday(int arr[], int size, int day, int mounth){
    int sum = 0;
    int result = 0;

    for(int i = 0; i < size; ++i){
        for(int j = i; j < size && j <= (i + (mounth - 1)); ++j){
            // al limite se le resta 1 debido a que la iteracion actual cuenta como elemento
            sum += arr[j];
            if(sum > day){
                break;
            }
        }
        if(sum == day){
            result++;
        }
        sum = 0;
    }
    
    return result;
}

int main(){
    int n;
    std::cin >> n;
    int chocolate[n];

    for(int k = 0; k < n; ++k){
        std::cin >> chocolate[k];
    }

    int d, m;
    std::cin >> d >> m;

    std::cout << birthday(chocolate, n, d, m) << std::endl;
    return 0;
}