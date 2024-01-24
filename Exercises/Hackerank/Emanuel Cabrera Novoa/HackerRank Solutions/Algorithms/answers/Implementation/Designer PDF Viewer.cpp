#include <iostream>
#include <string>

int main(){
    int arr[26];
    
    for(int i = 0; i < 26; ++i){
        std::cin >> arr[i];
    }

    std::string word;
    std::cin >> word;
    

    int max = 0;
    for(auto it : word){
        for(int i = 0; i < 26; ++i){
            if(it - 97 == i){
                if(arr[i] > max){
                    max = arr[i];
                }
                break;
            }
        }
    }

    std::cout << max * word.length() << std::endl;
    
    
    return 0;
}