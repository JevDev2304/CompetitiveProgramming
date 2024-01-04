#include <iostream>

int divisibleSumPairs(int size, int arr[], int div){
    int answer = 0;
    for(int i = 0; i < size; ++i){
        for(int j = i + 1; j < size; ++j){ 
            if((arr[i] + arr[j]) % div == 0 ){
                answer++;
            }
        }
    }
    return answer;
}

int main(){
    int n, k;
    std::cin >> n >> k;
    int numbers[n];

    for(int l = 0; l < n; ++l){
        std::cin >> numbers[l];
    }

    std::cout << divisibleSumPairs(n, numbers, k) << std::endl;
    return 0;
}
