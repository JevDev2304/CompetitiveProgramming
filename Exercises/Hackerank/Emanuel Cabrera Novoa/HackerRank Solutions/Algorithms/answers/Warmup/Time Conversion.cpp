#include <iostream>
#include <string>
#include <sstream>

// input example 07:05:45PM
std::string time(std::string AmPm){
    std::stringstream ss(AmPm);
    int hour;
    ss >> hour;
    std::string diferenciador = AmPm.substr(8, 2);
    if(diferenciador == "PM"){
        if(hour == 12){
            return AmPm.substr(0, 8);
        }
        else{
            hour += 12;
            return std::to_string(hour) + AmPm.substr(2, 6);
        }
    }
    else{
        if(hour == 12){
            return "00" + AmPm.substr(2, 6);
        }
        else{
            return AmPm.substr(0, 8);
        }
    }
}

int main(){
    std::string n;  
    getline(std::cin, n);
    std::cout << time(n) << std::endl;
    return 0;
}