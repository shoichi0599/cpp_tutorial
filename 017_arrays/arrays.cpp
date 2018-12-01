// Name : arrays.cpp

#include <iostream>

using namespace std;

int main() {

    cout << "Array of integers" << endl;
    cout << "========================" << endl;
    // 3 elements of array
    int values[3];
    // put value to each element
    values[0] = 88;
    values[1] = 123;
    values[2] = 7;
    cout << "values[0]: " << values[0] << endl;
    cout << "values[1]: " << values[1] << endl;
    cout << "values[2]: " << values[2] << endl;

    cout << endl << "Array of doubles" << endl;
    cout << "========================" << endl;
    // Initialize array
    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
    for (int i=0; i<4; i++) {
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }

    cout << endl << "Initializing with zero values" << endl;
    cout << "========================" << endl;
    int numberArrays[8] = {};
    for (int i=0; i<8; i++) {
        cout << "numberArrays[" << i << "]: " << numberArrays[i] << endl;
    }

    cout << endl << "Initializing with strings" << endl;
    cout << "========================" << endl;
    // Array of strings
    string texts[] = {"apple", "banna", "orange"};
    for (int i=0; i<3; i++) {
        cout << "texts[" << i << "]: " << texts[i] << endl;
    }

    return 0;
}