#include <iostream>

int main (){
    // Implicit type conversion
    int x = 0.5; // Even though 0.5 is a double(float)
    // std::cout << x  will return 0, because 0.5 has been converted into an int type from double

    int numerator = 7;
    int denominator = 10;
    
    // Explicit type conversion
    int percentage = numerator/denominator * 100;
    std::cout<< percentage << "%" << '\n'; //this will return 0 because the numerator and denominator are int types even though the answer should be double 0.7

    // Here we explicitly convert the int type denom... into a double type
    int correct = numerator/(double)denominator * 100;
    std::cout <<  correct << "%";

    return 0;
}