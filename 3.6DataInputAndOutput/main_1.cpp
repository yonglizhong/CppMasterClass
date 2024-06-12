#include <iostream>
#include <string>

int main(){

    int age;
    std::string name;

    std::cout << "Please enter your name and age. " << std::endl;

    std::getline(std::cin, name);
    std::cin >> age;
 

    std::cout << "Hello  " << name << ", you are " << age << " years old." << std::endl;

    return 0;
}