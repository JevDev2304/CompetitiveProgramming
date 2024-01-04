#include <iostream>

int candles(long long arr[], int size){
    long long max = arr[0];
    int contador = 1;
    for(int i = 1; i < size; ++i){
        if (arr[i] > max){
            max = arr[i];
            contador = 1;
        }
        else if (arr[i] == max){
            ++contador;
        }
    }
    return contador;
}

int main(){
    int n;
    std::cin >> n;
    long long arr[n];

    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    std::cout << candles(arr, n) << std::endl;
    return 0;
}