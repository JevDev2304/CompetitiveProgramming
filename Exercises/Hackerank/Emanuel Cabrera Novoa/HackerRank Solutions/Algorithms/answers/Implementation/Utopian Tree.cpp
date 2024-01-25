#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int cases[n], answers[n];

    for(int i = 0; i < n; ++i){
        std::cin >> cases[i];
        int answer = 1;
        for(int j = 1; j <= cases[i]; ++j){
            if(j % 2 != 0){
                answer *= 2;
            }
            else{
                answer++;
            }
        }
        answers[i] = answer;
    }

    for(auto it : answers){
        std::cout << it << std::endl;
    }

    return 0;
}