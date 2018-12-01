// Name : input.cpp

#include <iostream>
using namespace std;

int main() {

    // "<<" is insertion operator
    cout << "Enter your name: " << flush;
    // Declear empty string to store user input
    string input;
    // "cin" object holds a value user input
    // ">>" is extraction operator
    cin >> input;
    cout << "You entered: " << input << endl;

    cout << "Enter a number: " << flush;
    int number;
    cin >> number; 
    // this is not handled when user input value which is not number
    cout << "You entered: " << number << endl;

    return 0;
}