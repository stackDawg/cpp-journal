// input_output


#include <iostream>
#include <string>

int main() {
    //printing data
    // std::cout << "Hello, C++!\n";

    // int age{21}; 
    // std::cout << "Age : " << age << std::endl; 

    // std::cerr << "error message : something is wrong" << std::endl; 
    // std::clog << "log message : something happened" << std::endl;

    //data input
    // int age1; 
    // std::string name; 

    // std::cout << "please type your name and age : " << std::endl;

    // std::cin >> name; 
    // std::cin >> age1; 
    // std::cin >> name >> age1; 

    // std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;

    // data with spaces 

    std::string full_name; 
    int age3; 

    std::cout << "Please type in your full name and age "  << std::endl; 

    std::getline(std::cin, full_name); 

    std::cin >> age3; 

    std::cout << " Hello your name is " << full_name << " and you're " << age3 << " years old."; 

    return 0; 
}
