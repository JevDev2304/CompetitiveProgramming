#include <iostream>

int main(){
    long long budget, n, m;
    std::cin >> budget >> n >> m;
    long long keyboard[n], drives[m];

    for(long long i = 0; i < n; ++i){
        std::cin >> keyboard[i];
    }

    for(long long j = 0; j < m; ++j){
        std::cin >> drives[j];
    }

    long long answer = -1;
    for(long long i = 0; i < n; ++i){

        if(keyboard[i] < budget){
            for(long long j = 0; j < m; ++j){
                
                if(drives[j] < budget){
                    long long comparation = keyboard[i] + drives[j];
                    if(comparation <= budget){
                        if(comparation > answer){
                            answer = comparation;
                        }
                    }
                }
            }
        }
    }

    std::cout << answer << std::endl;
    return 0;
}