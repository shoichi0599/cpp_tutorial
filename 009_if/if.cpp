// Name : if.cpp
#include <iostream>
using namespace std;

int main() {
    string password = "hello";
    cout << "Enter your password > "  << flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "Password accepted." << endl;
    }
    if (input != password) {
        cout << "Access denied." << endl;
    }

    int number = 1;
    cout << "Enter your number > "  << flush;
    int numberInput;
    cin >> numberInput;
    if (numberInput == number) {
        cout << "Number accepted." << endl;
    }
    if (numberInput != number) {
        cout << "Number denied." << endl;
    }

    return 0;
}