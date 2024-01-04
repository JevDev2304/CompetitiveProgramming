//me dieron ganas de hacer todo en el main (y la quezo)
#include <iostream>
#include <map>

int main(){
    int n;
    std::cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    //solution

    std::map<int, int> mapa;

    for(int j = 0; j < n; ++j){
        if(mapa[arr[j]] == 0){
            mapa[arr[j]] = 1;
        }
        else{
            mapa[arr[j]]++;
        }
    }

    int solution = arr[0];
    for(auto it = mapa.begin(); it != mapa.end(); ++it){
        if(it->second > mapa[solution]){
            solution = it->first;
        }
        else if(it->second == mapa[solution] && solution > it->first){
            solution = it->first;
        }
    }

    std::cout << solution << std::endl;
    return 0;
}