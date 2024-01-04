#include <iostream>

int* breakingRecords(int arr[], int size){
    int* answer = new int[2] {0, 0};
    int * min_max = new int[2] {arr[0], arr[0]};
    
    for(int k = 1; k < size; ++k){
        if(arr[k] > min_max[0]){
            min_max[0] = arr[k];
            answer[0]++;
        }
        else if(arr[k] < min_max[1]){
            min_max[1] = arr[k];
            answer[1]++;
        }
    }
    delete[] min_max;
    return answer;
}

int main(){
    int n;
    std::cin >> n;
    int scores[n];

    for(int i = 0; i < n; ++i){
        std::cin >> scores[i];
    }

    int* solution = breakingRecords(scores, n);

    for(int j = 0; j < 2; ++j){
        std::cout << solution[j] << ' ';
    }

    delete[] solution;
    return 0;
}