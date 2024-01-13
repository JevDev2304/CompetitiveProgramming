#include <iostream>
#include <algorithm>
int main(){
    int n;
    std::cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    
    int q;
    std::cin >> q;
    int queries[q];

    for(int j = 0; j < q; j++){
        std::cin >> queries[j];
    }

    for(auto i : queries){
        auto it = std::lower_bound(arr, arr + n, i);
        if(*it == i){
            std::cout << "Yes " << (it - arr) + 1 << std::endl;
        }
        else{
            std::cout << "No " << (it - arr) + 1 << std::endl;
        }
    }
    return 0;
}