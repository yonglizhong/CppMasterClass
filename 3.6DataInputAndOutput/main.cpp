#include <iostream>
#include <string>

int main(){

    int age;
    std::string name;

    int age_1;
    std::string name_1;

    std::cout << "Please enter your age and name. " << std::endl;

    std::cin >> age;
    std::cin >> name;

    std::cout << "Hello  " << name << ", you are " << age << " years old." << std::endl;

    std::cin >> age_1 >> name_1;

    std::cout << "Hello  " << name_1 << ", you are " << age_1 << " years old." << std::endl;
    return 0;
}