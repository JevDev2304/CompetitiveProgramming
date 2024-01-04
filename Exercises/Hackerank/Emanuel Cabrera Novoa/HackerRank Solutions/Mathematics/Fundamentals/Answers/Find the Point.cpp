#include <iostream>

int* findPoint(int px, int py, int qx, int qy){
    int * solution = new int[2];
    solution[0] = qx + (qx - px);
    solution[1] = qy + (qy - py);
    return solution;
}

int main(){
    int n;
    std::cin >> n;
    int points[n][2][2];

    for(int i = 0; i < n; ++i){
        for(int point = 0; point < 2; ++point){
            for(int xy = 0; xy < 2; ++xy){
                std::cin >> points[i][point][xy];
            }
        }
    }

    for(int j = 0; j < n; ++j){
        int * answer = findPoint(points[j][0][0], points[j][0][1], points[j][1][0], points[j][1][1]);
        std::cout << answer[0] << ' ' << answer[1] << std::endl;
    }
    return 0;
}