#include <iostream>
#include <string>

std::string dayOfProgrammer(int year){
    if(year >= 1919){
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            return "12.09." + std::to_string(year);
        }
        else{
            return "13.09." + std::to_string(year);
        }
    }
    else if(year <= 1917){
        if(year % 4 == 0){
            return "12.09." + std::to_string(year);
        }
        else{
            return "13.09." + std::to_string(year);
        }
    }
    else{
        return "26.09.1918";
    }
}

int main(){
    int y;
    std::cin >> y;
    std::cout << dayOfProgrammer(y) << std::endl;
    return 0;
}