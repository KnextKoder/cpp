#include <iostream>

namespace studio{
    using std::string;
    string marvel = "Studio Name";
}

namespace person{
    using std::string;
    string marvel = "My name";
}

int main(){
    // Namespaces allow variables to use the same name so long as the name spaces are different. Its serves as a solution to naming conflicts in large projects.
    using std::cout;
    using namespace studio;
    cout << marvel << " for Marvel Studios" << '\n';
    
    cout << person::marvel << " is also Marvel";
    return 0;
}