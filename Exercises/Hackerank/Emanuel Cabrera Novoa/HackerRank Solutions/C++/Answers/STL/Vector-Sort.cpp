#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> v;
    int number;

    while(n--){
        std::cin >> number;
        v.push_back(number);
    }

    std::sort(v.begin(), v.end());

    for(auto i : v){
        std::cout << i << ' ';
    }
    return 0;
}