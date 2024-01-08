#include <iostream>

std::string bonAppetit(int arr[], int k, int b, int size){
    int sum = 0;
    for(int i = 0; i < size; ++i){
        if(i != k){
            sum += arr[i];
        }
    }   
    sum = sum / 2;

    if(sum == b){
        return "Bon Appetit";
    }
    else{
        
        return std::to_string(b - sum);
    }
}

int main(){
    int n, k;
    std::cin >> n >> k;
    int bill[n];
    for(int i = 0; i < n; ++i){
        std::cin >> bill[i];
    }
    
    int b;
    std::cin >> b;

    std::cout << bonAppetit(bill, k, b, n) << std::endl;
    return 0;
}