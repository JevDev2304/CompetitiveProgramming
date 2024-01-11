#include <iostream>
#include <sstream>
#include <vector>

//sstream tiene un puntero de lectura

int main() {
    std::vector<int> vec;
    std::string sstream;

    std::cin >> sstream;

    std::stringstream ss(sstream);

    int iterador;

    while(ss >> iterador){
        vec.push_back(iterador);
        ss.seekg(static_cast<std::streamoff>(ss.tellg()) + 1); //esta conversion se hace debido a que seekg solo admite datos
        //de tipo streamoff y .tellg retorna un valor de tipo streampos
    }

    for(auto i : vec){
        std::cout << i << std::endl;
    }

    return 0;
}
