#include <iostream>

int main (){
    // Implicit type conversion
    int x = 0.5;
    // std::cout << x  will return 0, because the 0.5 as a double (float) value has been converted into an int type

    // Explicit type conversion
    int numerator = 7;
    int denominator = 10;

    int percentage = numerator/denominator * 100;
    std::cout<< percentage << "%" << '\n'; //this will return 0 because the num... and denom... are int types

    // Here we explicitly conver the int type denom... into a double type
    int correct = numerator/(double)denominator * 100;
    std::cout <<  correct << "%";

    return 0;
}