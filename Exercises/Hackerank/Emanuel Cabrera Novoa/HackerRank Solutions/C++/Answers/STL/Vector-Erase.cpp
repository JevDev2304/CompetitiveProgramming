#include  <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n;
    std::cin >> n;
    int x;

    while(n--){
        std::cin >> x;
        v.push_back(x);
    }

    int element;
    std::cin >> element;

    v.erase(v.begin() + element - 1);

    int a, b;
    std::cin >> a >> b;

    v.erase(v.begin() + a - 1 , v.begin() + b - 1);

    std::cout << v.size() << std::endl;

    for(auto i : v){
        std::cout << i << ' ';
    }
    return 0;
}