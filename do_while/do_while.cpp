// Name : do_while.cpp

#include <iostream>
using namespace std;

int main() {

    // const => variable can not be re-asigned
    const string password = "hello";

    string input;
    /*
    do {
        cout << "Enter your password > " << flush;
        cin >> input;

        if (input != password) {
            cout << "Access denied." << endl;
        }
    } while (input != password);
    */
    // ↓ make it better
    do {
        cout << "Enter your password > " << flush;
        cin >> input;

        if (input == password) {
            break;
        } else {
            cout << "Access denied." << endl;
        }
    } while (true);

    cout << "Password accepted." << endl;

    return 0;
}