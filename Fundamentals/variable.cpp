// VARIABLES AND SIMPLE DATA TYPES
#include <iostream>

int main(){

    // Integers (Whole numbers)
    int x = 5;
    int age = 22;
    int year = 2002;

    // Double (Floating point numbers)
    double temp = 27.5;
    double weight = 86.9;
    double height = 6.11;

    // Chars (Single characters)
    char grade = 'A';
    char alphabet = 'B';
    char rating = 'C';

    // Strings (Objects representing a sequence of texts)
    std::string name = "Marvel";
    std::string course = "chemical engineering";
    std::string current_book = "game engine architecture";

    // Boolean (True or False)
    bool is_boy = true;
    bool is_twenty = false;

    std::cout << "Hello, my name is " << name << ' ' << "I'm studying " << course << '\n' << "Today, I started reading-" << current_book << '\n';
    return 0;
}