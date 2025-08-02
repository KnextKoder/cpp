#include <iostream>

int add_two(int x){
    double result = x + 2;
    return result;
};

int main(){

    std::cout << add_two(5);

    return 0;
}