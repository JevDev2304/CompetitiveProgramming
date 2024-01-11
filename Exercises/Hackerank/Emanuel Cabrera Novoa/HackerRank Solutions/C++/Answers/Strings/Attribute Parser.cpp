#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <vector>


int main(){
    int n, q;
    std::cin >> n >> q;
    std::cin.ignore();
	std::string anidacion = "", tag, valor, linea, iteracion, llave, consulta;
    std::map<std::string, std::string> m;
    
	//for de n
    for(int i = 0; i < n; ++i){
		getline(std::cin, linea);
		std::stringstream line(linea);
	
		//descomponer el input
		while(getline(line, iteracion, ' ')){
			//eliminar el > si lo tiene
			if(iteracion[iteracion.length() - 1] == '>'){
				iteracion.pop_back();
			}

			//inicio de linea
			if(iteracion[0] == '<'){

				//closing tag
				if(iteracion[1] == '/'){
					tag = iteracion.substr(2, iteracion.length() - 1);
					

					anidacion.erase(anidacion.find(tag), tag.length());

					if(anidacion[anidacion.length() - 1] == '.'){
						anidacion.pop_back();
					}
					
				}
				else{
					tag = iteracion.substr(1);
					
					if(anidacion.length() == 0){
						anidacion = tag;
						
					}
					else{
						anidacion += '.' + tag;
						
					}
				}
			}

			else if(iteracion[0] != '"' && iteracion[0] != '='){
				llave = anidacion + '~' + iteracion;
			}

			else if(iteracion[0] == '"' && iteracion[iteracion.length() - 1] == '"'){
				valor = iteracion.substr(1, iteracion.length() - 2);

				m[llave] = valor;
			}
		}
    }
	std::vector<std::string> respuesta;


	for(int i = 0; i < q; ++i){
		getline(std::cin, consulta);

		if (m[consulta] == ""){
			respuesta.push_back("Not Found!");
		}
		else{
			respuesta.push_back(m[consulta]);
		}
	}

	for(auto j : respuesta){
		std::cout << j << std::endl;
	}
    return 0;
}