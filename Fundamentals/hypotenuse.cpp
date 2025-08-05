// Program to find the hypotenuse of a triangle
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

// SOH CAH TOA
// a sqr + b sqr = c sqr

int main() {
    double angle;
    std::string response_one;
    std::string response_two;
    double opposite;
    double adjacent;
    double hypotenuse;

    cout << "Do you have an angle, yes or no?";
    cin >> response_one;
    
    if (response_one == "yes"){
        cout << "\n What is the angle?";
        cin >> angle;
        
        cout << "\n What do you have, opposite or adjacent?";
        cin >> response_two;
        
        if (response_two == "opposite"){
            cout << "\n What is the opposite?";
            cin >> opposite;
            hypotenuse = opposite/sin(angle);
            
            cout << "\nThe hypotenuse is: " << hypotenuse;
        }else if (response_two == "adjacent"){
            cout << "\nWhat is the adjacent?";
            cin >> adjacent;
            hypotenuse = adjacent/cos(angle);

            cout << "\nThe hypotenuse is: " << hypotenuse;
        }else{
            cout << '\n' << response_two << " is not a valid option";
        }
    }else{
        cout << "\n What are your opposite and adjacent values?";
        cout << "\n Opposite:";
        cin >> opposite;
        cout << "\n Adjacent:";
        cin >> adjacent;
        
        opposite = pow(opposite, 2);
        adjacent = pow(adjacent, 2);
        
        hypotenuse = sqrt(opposite + adjacent);
        cout << "\nThe hypotenuse is: " << hypotenuse;

    }
    
    // It would seem that I don't know math
    
    return 0;
}