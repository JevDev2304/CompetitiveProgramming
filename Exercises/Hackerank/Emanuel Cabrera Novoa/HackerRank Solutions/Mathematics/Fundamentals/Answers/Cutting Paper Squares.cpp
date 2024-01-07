#include <iostream>

int main(){
    unsigned long long n, m;
    unsigned long long cuts;
    std::cin >> n >> m;

    if(n == 1 && m == 1){
        std::cout << 0 << std::endl;
    }

    else{
        cuts =  n - 1 + (n * (m - 1));
        std::cout << cuts << std::endl;
    }
    return 0;
}