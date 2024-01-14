#include <iostream>
#include <cmath>

const char* catAndMouse(int A, int B, int C){
    int distancia_A = abs(A - C);
    int distancia_B = abs(B - C);

    if(distancia_A == distancia_B){
        return "Mouse C";
    }
    else if(distancia_A < distancia_B){
        return "Cat A";
    }
    else{
        return "Cat B";
    }
}

int main(){
    int q;
    std::cin >> q;
    const char * answer[q];
    int catA, catB, mouseC;
    for(int i = 0; i < q; ++i){
        std::cin >> catA >> catB >> mouseC;
        answer[i] = catAndMouse(catA, catB, mouseC);
    }

    for(auto i : answer){
        std::cout << i << std::endl;
    }
    return 0;
}