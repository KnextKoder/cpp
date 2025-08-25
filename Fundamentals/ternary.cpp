#include <iostream>
using std::cout;
using std::cin;


int main (){
    // Ternary operator syntax: condition ? expression1 : expression2
    // Even or Odd checker using ternary operator
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    number % 2 == 0 ? cout << number << " is even.\n" : cout << number << " is odd.\n";

    return 0;
}