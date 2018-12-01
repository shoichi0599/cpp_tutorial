// Name : comparing_floats.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float value1 = 1.1;

    cout << "value1: " << value1 << endl;
    // 1.100000024
    cout << "value1 with setprecision(10): " << setprecision(10) << value1 << endl;
    cout << endl;

    // "if (value1 == 1.1)" ==> not equal
    cout << "if (value1 == 1.1) => ";
    if (value1 == 1.1) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }
    cout << endl;
    
    // When checking float value, 
    // yout need to think about the defference between the two float value 
    // is less than a certain amount or not.

    // Because it's onluy a limited amount of memory after certain amount of digits,
    // the value what we interpret that float to be is going to get crazy and a bit random.
    // We can only rely on the float for a certain number of digits or a certain amount of precision

    // "if (value1 < 1.11)" ==> if value1 is less than 1.11 then true
    cout << "if (value1 < 1.11) => ";
    if (value1 < 1.11) {
        cout << "less than 1.11" << endl;
    } else {
        cout << "not equal" << endl;
    }
}