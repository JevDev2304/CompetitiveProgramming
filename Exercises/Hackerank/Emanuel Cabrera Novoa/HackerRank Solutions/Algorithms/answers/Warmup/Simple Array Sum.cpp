#include <iostream>

int sum(int (&arr)[], int size);

int main(){
    int n;
    std::cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    std::cout << sum(arr, n) << std::endl;
    return 0;
}

int sum(int (&arr)[], int size){
    int result = 0;
    for (int i = 0; i < size; ++i){
        result += arr[i];
    }
    return result;
}
