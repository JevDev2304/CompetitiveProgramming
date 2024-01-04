#include <iostream>

class Box{
private:
    int l, b, h;
public:
    Box();
    Box(int length, int breadth, int height);
    Box(const Box& B);
    inline int getLength() const {return l;}
    inline int getBreadth() const {return b;}
    inline int getHeight() const {return h;}
    inline long long CalculateVolumen() const {return l * b * h;}
    bool operator<(const Box& other);
    friend std::ostream& operator<<(std::ostream& os, const Box& caja);
    
};


int main(){
    Box caja(4, 5, 6);
    std::cout << caja << std::endl;
    return 0;
}

Box::Box() : l(0), b(0), h(0){}

Box::Box(int length, int breadth, int height) :
    l(length), b(breadth), h(height){}

Box::Box(const Box& B) :
    l(B.l), b(B.b), h(B.h){}

bool Box::operator<(const Box& other){
    if(l < other.l){
	    return true;
    }
    else if(b < other.b && l == other.l){
	    return true;
    }
    else if(h < other.h && b == other.b && l == other.l){
	    return true;
    }
    else{
	    return false;
    }
}

std::ostream& operator<<(std::ostream& os, const Box& caja){
    os << caja.h << ' ' << caja.b << ' ' << caja.h;
    return os;
}