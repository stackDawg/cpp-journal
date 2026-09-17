// functions
#include <iostream>

int addNumbers( int first_param, int second_param){

    int result = first_param + second_param; 
    return result; 
}

int multiplyNumber( int first_param, int second_param ){
    int result = first_param * second_param; 
    return result; 
}

int main() {
    int first_number {3};
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl; 
    std::cout << "Second number : " << second_number << std::endl; 

    int sum = first_number + second_number; 
    std::cout << "Sum : " << sum << std::endl; 

    sum = addNumbers(37,3); 
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(30, 24);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(4,5) << std::endl; 

    int product = multiplyNumber(12, 9);
    std::cout << "Product : " << product << std::endl; 

    std::cout << "Product : " << multiplyNumber(11, 9) << std::endl;
    
    return 0; 
}
