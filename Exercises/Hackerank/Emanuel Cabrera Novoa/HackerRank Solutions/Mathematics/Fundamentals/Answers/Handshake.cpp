#include <iostream>

int handshakes(int integrantes){
    if(integrantes > 1){
        if(integrantes % 2 == 0){
            return (integrantes - 1) * (integrantes / 2);
        }
        else{
            return (integrantes * ((integrantes - 1) / 2));
        }
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    std::cin >> t;
    int arr[t];

    for(int i = 0; i < t; ++i){
        std::cin >> arr[i];
    }

    for(int j = 0; j < t; ++j){
        std::cout << handshakes(arr[j]) << std::endl;
    }

    return 0;
}