// Name : break_continue.cpp

#include <iostream>
using namespace std;

int main() {
    // break
    cout << "Break: " << endl;
    for (int i=0; i<5; i++) {
        cout << "i is " << i << endl;
        if (i == 3) {
            break; // break out if loop
        }
        cout << "Looping ..." << endl;
    }

    // continue
    cout << "Continue: " << endl;
    for (int i=0; i<5; i++) {
        cout << "i is " << i << endl;
        if (i == 3) {
            // break out this particular condition only and go to next loop
            continue; 
        }
        cout << "Looping ..." << endl;
    }
    
    cout << "Program quitting ..." << endl;
    return 0;
}