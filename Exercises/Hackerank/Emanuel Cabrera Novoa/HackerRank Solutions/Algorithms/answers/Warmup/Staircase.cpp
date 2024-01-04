#include <iostream>

void stair(int n){
    bool condicion;
    for(int i = 1; i <= n; ++i){
        condicion = false;
        for(int j = 0; j < n; ++j){    
            if (j == n - i){
                condicion = true;
            }
            switch (condicion)
            {
            case true:
                std::cout << '#';
                break;
            case false:
                std::cout << ' ';
                break;
            }
        }
        std::cout << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    stair(n);
    return 0;
}