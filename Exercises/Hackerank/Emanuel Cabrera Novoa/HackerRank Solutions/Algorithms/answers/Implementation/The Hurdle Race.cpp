#include <iostream>

int hurdleRace(int k, int height[], int size){
    int max = 0;

    for(int i = 0; i < size; ++i){
        if(height[i] > max){
            max = height[i];
        }
    }

    int result = max - k;

    return result < 0 ? 0 : result;
}

int main(){
    int n, k;
    std::cin >> n >> k;

    int height[n];

    for(int i = 0; i < n; ++i){
        std::cin >> height[i];
    }

    std::cout << hurdleRace(k, height, n) << std::endl;
    return 0;
}