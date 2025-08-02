#include <iostream>

// typedef std::string str; 
// Both work the same and are correct, but 'using' keyword is more standard

using str = std::string; //typedef

using std::cout; // namespace

int main () {
    // Typedef allows in creating aliases for existing types
    str name = "Marvel";

    cout << "My name is: " << name;
    return 0;
}