# include <iostream>
using std::cout;


int main (){
    // Ternary operator syntax: condition ? expression1 : expression2
    // Even or Odd checker using ternary operator
    int number;
    cout << "Enter an integer: ";
    std::cin >> number;

    number % 2 == 0 ? cout << number << " is even.\n" : cout << number << " is odd.\n";

    return 0;
}