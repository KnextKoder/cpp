#include <iostream>
using std::cout;
using std::cin;

int main(){
    int month;
    cout << "Enter the month (1-12)";
    cin >> month;

    switch (month){
        case 1:
            cout << "Looks like we're in January";
            break;
        case 2:
            cout << "Looks like we're in February";
            break;
        case 3:
            cout << "Looks like we're in March";
            break;
        case 4:
            cout << "Looks like we're in April";
            break;
        case 5:
            cout << "Looks like we're in May";
            break;
        case 6:
            cout << "Looks like we're in June";
            break;
        case 7:
            cout << "Looks like we're in July";
            break;
        case 8:
            cout << "Looks like we're in August";
            break;
        case 9:
            cout << "Looks like we're in September";
            break;
        case 10:
            cout << "Looks like we're in October";
            break;
        case 11:
            cout << "Looks like we're in November";
            break;
        case 12:
            cout << "Looks like we're in December";
            break;
        default:
            cout << "Input must be between 1 and 12";
    }
    return 0;
}