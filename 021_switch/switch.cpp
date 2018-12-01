// Name : switch.cpp

#include <iostream>
using namespace std;

int main() {
    /*
     * Constant name: k{constant name}
     * for example, "const int kDaysInAWeek = 7;" "const int kAndroid8_0_0 = 24;"
     * @see https://google.github.io/styleguide/cppguide.html#Constant_Names
     */
    const int kAdded = 1;

    cout << "1. Add record." << endl;
    cout << "2. Delete record." << endl;
    cout << "3. Select record." << endl;
    cout << "Input selection > " << flush;

    int input;
    cin >> input;

    switch (input) {
        case kAdded: // can be constant, variable not accepted
            cout << "Added." << endl;
            break;
        case 2:
            cout << "Deleted." << endl;
            break;
        case 3:
            cout << "Selected." << endl;
            break;
        default:
            cout << "Unrecognized value." << endl;
    }

    return 0;
}