#include <iostream>
#include <map>
#include <algorithm>
int pickingNumbers(int arr[], int size){
    std::map<int, int> m;

    for(int i = 0; i < size; ++i){
        int borrar = arr[i];
        
        m[arr[i]]++;
    }
    if(m.size() == 1){
        return m.begin()->second;
    }
    int arreglo[m.size()];
    int contador = -1;
    for(auto i : m){
        contador++;
        arreglo[contador] = i.first ;
    }

    std::sort(arreglo, arreglo + m.size());

    int answer = 0;

    for(int i = 0; i < m.size() - 1; ++i){
        if(m[arreglo[i]] > answer){
            answer = m[arreglo[i]];
        }
        else if(m[arreglo[i + 1]] > answer){
            answer = m[arreglo[i + 1]];
        }
        
        if(arreglo[i + 1] - arreglo[i] <= 1){
            if(m[arreglo[i]] + m[arreglo[i + 1]] > answer){
                answer = m[arreglo[i]] + m[arreglo[i + 1]];
            }
        }
    }
    return answer;
}

int main(){
    int q;
    std::cin >> q;
    int a[q];

    for(int i = 0; i < q; ++i){
        std::cin >> a[i];
    }

    std::cout << pickingNumbers(a, q) << std::endl;
    return 0;
}