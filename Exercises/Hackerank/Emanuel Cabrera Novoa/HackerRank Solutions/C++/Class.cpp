#include <iostream>
#include <sstream>
class Student{
private:
    int age, standard;
    std::string first_name;
    std::string last_name;
public:
    int get_age();
    void set_age(int);
    std::string get_first_name();
    void set_first_name(std::string);
    std::string get_last_name();
    void set_last_name(std::string);
    int get_standard();
    void set_standard(int);
    std::string to_string();
    std::string name();
};

int Student::get_age(){
    return age;
}

void Student::set_age(int edad){
    age = edad;
}

std::string Student::get_first_name(){
    return first_name;
}

void Student::set_first_name(std::string nombre){
    first_name = nombre;
}

std::string Student::get_last_name(){
    return last_name;
}

void Student::set_last_name(std::string nombre){
    last_name = nombre;
}

int Student::get_standard(){
    return standard;
}

void Student::set_standard(int promedio){
    standard = promedio;
}

std::string Student::to_string(){
    std::stringstream ss;
    ss << age << ',' << first_name << ',' << last_name << ',' << standard; 
    return ss.str();
}

std::string Student::name(){
    return get_last_name() + ", " + get_first_name();
}

int main(){
    Student estudiante;
    int age, standard;
    std::string firstname, lastname;

    std::cin >> age >> firstname >> lastname >> standard;

    estudiante.set_age(age);
    estudiante.set_first_name(firstname);
    estudiante.set_last_name(lastname);
    estudiante.set_standard(standard);

    std::cout << estudiante.get_age() << std::endl
    << estudiante.name() << std::endl << estudiante.get_standard()
    << std::endl << std::endl << estudiante.to_string();
    
    return 0;
}