#include <iostream>

int* comparation(int a[], int b[]){
    int* result = new int[2];
    result[0] = 0;
    result[1] = 0;
    for (int i = 0; i < 3; ++i){
        if (a[i] > b[i]){
            result[0] += 1;
        }
        else if(a[i] < b[i]){
            result[1] += 1;
        }
    }
    return result;
}

int main(){
    int a[3], b[3];

    for(int i = 0; i < 3; ++i){
        std::cin >> a[i];
    }
    for(int i = 0; i < 3; ++i){
        std::cin >> b[i];
    }

    int* result = comparation(a, b);

    std::cout << result[0] << ' ' << result[1] << std::endl;
    return 0;
}