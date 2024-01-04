#include <iostream>

int maximumDraws(int types){
    return types + 1;
}

int main(){
    int n;
    std::cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    for(int j = 0; j < n; ++j){
        std::cout << maximumDraws(arr[j]) << std::endl;
    }
    return 0;
}