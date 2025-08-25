# include <iostream>
using std::cout;
using std::cin;

int main(){
    // Simple calculator that adds, subtracts, multiplies and divides two numbers
    char operand;
    double num1;
    double num2;
    double result;

    std::cout << "*************************CALCULATOR*************************\n";
    
    cout << "Select an operation (+ - * /)\n";
    cin >> operand;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operand){
        case '+':
            result = num1 + num2; 
            cout << "Result: " << result << "\n";
            break;
        case '-':
            result = num1 - num2; 
            cout << "Result: " << result << "\n";
            break;
        case '*':
            result = num1 * num2; 
            cout << "Result: " << result << "\n";
            break;
        case '/':
            result = num1 / num2; 
            cout << "Result: " << result << "\n";
            break;
        default:
            cout << "Invalid operation\n";
            break;
    }

    std::cout << "************************************************************\n";



    return 0;
}