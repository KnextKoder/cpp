#include <iostream>
// std::cout << to print
// std::cin >> to accept user input 

int main(){

    std::string name;
    int age;

    std::cout << "What is your name? \n";
    std::getline(std::cin >> std::ws, name); // std::getline for strings with spaces std::ws to deal with whitespaces
    
    std::cout << "What is your age? \n";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}