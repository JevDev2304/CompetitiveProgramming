#include <iostream>

void plusMinus(int arr[], int size){
    
    int contador[] = {0, 0, 0};
    for(int i = 0; i < size; ++i){
        if (arr[i] > 0){
            contador[0] += 1;
        }
        else if(arr[i] < 0){
            contador[1] += 1;
        }
        else if(arr[i] == 0){
            contador[2] += 1;
        }
    }
    for(auto i : contador){
        std::cout << static_cast<double>(i) / size << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    plusMinus(arr, n);
    return 0;
}