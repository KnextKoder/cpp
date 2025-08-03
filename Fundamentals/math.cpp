#include <iostream>

int main(){
    // (+ - * /)
    // Add
    int x = 5;
    int y = 5;
    int z = x + y;
    // std::cout << z; prints 10

    // Subtraction
    int a = 20;
    int b = 10;
    int c = a - b;
    // std::cout << c; prints 10

    // Multiplication
    int length = 5;
    int breadth = 2;
    int area = length * breadth;
    // std::cout << area; prints 10

    // Division
    int numerator = 100;
    int denominator = 10;
    int result = numerator/denominator;
    // std::cout << result; prints 10

    // Modulus / Modulo = to find the remainder from a division operation
    int odd_num = 7;
    int remainder = numerator%odd_num;
    // std::cout << remainder; returns 2 because 100/7 returns 98 as the nearest whole number, and 100 - 98 = 2

    return 0;
}