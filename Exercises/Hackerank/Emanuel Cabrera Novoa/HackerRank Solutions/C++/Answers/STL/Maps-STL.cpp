#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
int main(){
    std::map<std::string, int> m;
    std::vector<int> output;
    int q;
    std::cin >> q;
    int type;
    std::string x;
    int y;

    for(int i = 0; i < q; ++i){
        std::cin >> type;
        
        switch (type)
        {
        case 1: { //sum
            std::cin >> x >> y;
            bool existe = false;
            for(auto it : m){
                if(it.first == x){
                    m[x] += y;
                    existe = true;
                    break;
                }
            }
            if(!existe){
                m.insert(std::make_pair(x, y));
            }
            break;
        }
        case 2: //erase
            std::cin >> x;
            m[x] = 0;
            break;
        case 3: //print
            std::cin >> x;
            output.push_back(m[x]);
            break;
        }
    }

    for(int itr : output){
        std::cout << itr << std::endl;
    }

    return 0;
}