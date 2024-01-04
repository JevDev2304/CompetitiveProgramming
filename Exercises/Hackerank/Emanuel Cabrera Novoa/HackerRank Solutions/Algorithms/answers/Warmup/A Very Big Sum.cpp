#include <iostream>

long long sum(long long arr[], int size){
    long long result = 0;
    for (int i = 0; i < size; ++i){
        result += arr[i];
    }
    return result;
}

int main(){
    int n;
    std::cin >> n;
    long long arr[n];
    
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    
    std::cout << sum(arr, n) << std::endl;
    return 0;
}