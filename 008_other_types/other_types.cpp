// Name: other_types.cpp

#include <iostream>

using namespace std;

int main() {

    bool bValue = true;
    // In C++, true = 1, false = 0
    cout << "true : " << bValue << endl;
    bValue = false;
    cout << "false: " << bValue << endl;
    cout << endl;

    // 'char' 
    char cValue = 55; // => '55' in ASCII table is '7'
    cout << "cValue(55)  : " << cValue << endl; // => 7
    cValue = '7';
    // (int) means cast
    cout << "cValue('7') : " << cValue << endl;
    cout << "(int) cValue: " << (int) cValue << endl; // => 55
    cout << "sizeof(char): " << sizeof(char) << " byte" << endl;
    cout << endl;

    wchar_t wValue = 'i';
    cout << "wValue(i)      : " << wValue << endl;
    cout << "(char) wValue  : " << (char) wValue << endl;
    cout << "sizeof(wchar_t): " << sizeof(wchar_t) << " byte" << endl;

    return 0;
}