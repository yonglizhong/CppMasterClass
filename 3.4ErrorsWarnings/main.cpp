#include <iostream>

int main(){

    //Compile time error
    std::cout << "Hello World"  << std::endl;

    //Warning + Runtime error
    int value = 7/0;
    std::cout << "value:" << value << std::endl;

    return 0;
}