#include <iostream>

void ordenar(long long arr[], int size){
    long long aux;
    for(int i = 0; i < size; ++i){
        for(int j = 1; j < size; ++j){
            if (arr[j] < arr[j-1]){
                aux = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = aux;
            }
        }
    }
}


long long* min_max(long long arr[], unsigned int size){
    /*para esto el arreglo debe estar ordenado*/
    long long * ptr = new long long[2] {0, 0};
    for(int i = 0; i < size; ++i){
        if (i > 0){
            ptr[1] += arr[i];
        }
        if(i < (size - 1)){
            ptr[0] += arr[i];
        }
    }
    return ptr;
}


int main(){
    long long arr[5];
    for(int i = 0; i < 5; ++i){
        std::cin >> arr[i];
    }

    ordenar(arr, 5);
    long long* answer = min_max(arr, 5);

    std::cout << answer[0] << ' ' << answer[1] << std::endl;

    delete[] answer;

    return 0;
}