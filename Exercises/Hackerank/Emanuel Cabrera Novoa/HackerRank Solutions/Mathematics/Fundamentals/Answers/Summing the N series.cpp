#include <iostream>
#include <cmath>

unsigned long long summingSeries(unsigned long long n){
    
  const unsigned long long div = pow(10,9) + 7;
  unsigned long long resultado = (n % div) * (n % div); //la serie 1, 2, 3 ... 2n-1 = n^2

  resultado = resultado % div;
  return resultado;
    
}

int main(){
    int t;
    std::cin >> t;
    unsigned long long arr[t];
    

    for(int i = 0; i < t; ++i){
        std::cin >> arr[i];
    }

    for(int j = 0; j < t; ++j){
        std::cout << summingSeries(arr[j]) << std::endl;
    }
    return 0;
}