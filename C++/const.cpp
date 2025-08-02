#include <iostream>

int main(){
    const double PI = 3.14; // const signifies that the value of the varaible is not intended to be chanegd. E.g speed of light, gravity, pi, etc
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm sq";

    return 0;
}