#include <iostream>
#include <string>

std::string jumps(int x1, int v1, int x2, int v2){
    int x = x1 - x2;
    int v = v2 - v1;

    if(v == 0){
        return x == 0 ? "YES" : "NO";
    }

    if((x % v == 0) && (x / v >= 0)){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    int x1, v1, x2, v2;
    std::cin >> x1 >> v1 >> x2 >> v2;

    std::cout << jumps(x1, v1, x2, v2) << std::endl;
    return 0;
}