#include <iostream>

class Student{
private:
    int score[5];
public:
    void input(int arr[5]);
    int calculateTotalScore();
};


int main(){
    int n, arr[5];
    std::cin >> n;
    Student estudiante[n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 5; ++j){
            std::cin >> arr[j];
        }
        estudiante[i].input(arr);
    }

    int result = 0, filtro = estudiante[0].calculateTotalScore();

    for(int it = 1; it < n; ++it){
        if(estudiante[it].calculateTotalScore() > filtro){
            result++;
        } 
    }

    std::cout << result << std::endl;
    return 0;
}

void Student::input(int arr[5]){
    for(int i = 0; i < 5; ++i){
        score[i] = arr[i];
    }
}

int Student::calculateTotalScore(){
    int result = 0 ;
    for(auto i : score){
        result += i;
    }
    return result;
}