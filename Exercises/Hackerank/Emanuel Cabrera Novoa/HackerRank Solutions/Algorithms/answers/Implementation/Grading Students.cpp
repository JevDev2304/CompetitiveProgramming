#include <iostream>

void gradingStudents(int arr[], int size){
    for(int i = 0 ; i < size; ++i){
        if(arr[i] >= 38){
            for(int sum = 1; sum < 3; ++sum){
                if((arr[i] + sum) % 5 == 0){
                    arr[i] += sum;
                }
            }
        }
    }
}

int main(){
    int n;
    std::cin >> n;
    int grade[n];

    for(int i = 0; i < n; ++i){
        std::cin >> grade[i];
    }

    gradingStudents(grade, n);

    for(auto k : grade){
        std::cout << k << std::endl;
    }
    return 0;
}