// Name : do_while.cpp

#include <iostream>
using namespace std;

int main() {

    // const => variable can not be re-asigned
    const string password = "hello";

    cout << "Enter your password > " << flush;

    string input;
    do {
        cout << "Enter your password > " << flush;
        cin >> input;

        if (input != password) {
            cout << "Access denied." << endl;
        }
    } while (input != password);

    cout << "Password accepted" << endl;

    return 0;
}