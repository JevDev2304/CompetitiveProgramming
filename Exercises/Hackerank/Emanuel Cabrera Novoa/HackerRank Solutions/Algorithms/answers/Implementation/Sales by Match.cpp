#include <iostream>
#include <vector>

int sockMerchant(int size, int socks[]){
    std::vector<int> tipes;
    std::vector<int> pairs;
    bool new_sock = true;

    for(int j = 0; j < size; ++j){
        int k = -1;

        for(auto i : tipes){
            ++k;
            if(socks[j] == i){
                new_sock = false;
                pairs[k]++;
                break;
            }
        }

        if(new_sock){
            tipes.push_back(socks[j]);
            pairs.push_back(1);
        }
        else{
            new_sock = true;
        }
    }

    int result = 0;

    for(auto n : pairs){
        result += n / 2;
    }

    return result; 
}

int main(){
    int n;
    std::cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    std::cout << sockMerchant(n, arr) << std::endl;
    return 0;
}