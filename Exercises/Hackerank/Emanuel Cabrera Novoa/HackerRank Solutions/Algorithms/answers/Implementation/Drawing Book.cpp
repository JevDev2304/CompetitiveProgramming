#include <iostream>

int pageCount(int number_pages, int page){
    // book[0] page left, book[1] page right
    int book[2]; 
    int it = 0;
    int numero_paginas = number_pages;
    int pagina = page;
    if(number_pages - page < page - 1
    || (number_pages - page == page - 1 && number_pages % 2 != 0) ){
        
        if(number_pages % 2 == 0){
            book[0] = number_pages;
            book[1] = number_pages + 1;
        }
        else{
            book[0] = number_pages - 1;
            book[1] = number_pages;
        }

        while(book[0] != page && book[1] != page){
            ++it;
            book[0] -= 2;
            book[1] -= 2;
        }
    }
    else{
        book[0] = 0;
        book[1] = 1;

        while(book[0] != page && book[1] != page){
            ++it;
            book[0] += 2;
            book[1] += 2;
        }
    }

    return it;
}

int main(){
    int n, p;
    std::cin >> n >> p;
    std::cout << pageCount(n, p) << std::endl;
    return 0;
}