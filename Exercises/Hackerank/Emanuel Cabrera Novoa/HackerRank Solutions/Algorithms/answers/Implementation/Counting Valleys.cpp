#include <iostream>

int countingValleys(int steps, char path[]){
    bool valleys = false;
    int height = 0;
    int answer = 0;

    for(int i = 0; i < steps; ++i){
        //conprobar si sube o baja
        if(path[i] == 'U'){
            height++;
        }
        else{
            height--;
        }
        //comprobar entra en el valle
        if(height < 0 && !valleys){
            valleys = true;
        }
        //comprobar si sale del valle
        else if(valleys && height == 0){
            answer++;
            valleys = false;
        }
    }

    return answer;
}

int main(){
    int s;
    std::cin >> s;
    char p[s];
    
    for(int i = 0; i < s; ++i){
        std::cin >> p[i];
    }
    
    std::cout << countingValleys(s, p) << std::endl;
}