#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;

}

int main(){

    int first_number {4};
    int second_number {3};

    std::cout << "First number :" << first_number << std::endl; 
    std::cout << "Second number :" << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum :" << sum << std::endl;

    int another_sum = addNumbers(4,5);
    std::cout << "Sum from function:" << another_sum << std::endl;

    std::cout << "Sum from function:" << addNumbers(32,1000) << std::endl;
    return 0; 

}
