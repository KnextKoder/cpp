#include <iostream>

int main(){
    int age;
    std::cout << "What is your age?";
    std::cin >> age;

    if(age >= 100){
        std::cout<<"You are too old for this site";
    }else if(age >= 18){
        std::cout<<"Welcome to the site";
    }else if(age <= 0){
        std::cout<<"TF? You haven't been born yet";
    }else{
        std::cout<<"You are too young for this site";
    }
    return 0;
}