// Name : integer_types.cpp

// c++ libraries
#include <iostream>
// limits.h 
// @see: http://www.cplusplus.com/reference/climits/
#include <limits>

using namespace std;

int main() {
    int value = 5456;
    cout << value << endl;

    // INT_MAX is a one of the constants in limits.h
    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;
    cout << endl;
    
    cout << "=== Each max/min values ===" << endl;
    cout << "CHAR_BIT  : " << CHAR_BIT << endl;
    cout << "SCHAR_MIN : " << SCHAR_MIN << endl;
    cout << "SCHAR_MAX : " << SCHAR_MAX << endl;
    cout << "UCHAR_MAX : " << UCHAR_MAX << endl;
    cout << "CHAR_MIN  : " << CHAR_MIN << endl;
    cout << "CHAR_MAX  : " << CHAR_MAX << endl;
    cout << "MB_LEN_MAX: " << MB_LEN_MAX << endl;
    cout << "SHRT_MIN  : " << SHRT_MIN << endl;
    cout << "SHRT_MAX  : " << SHRT_MAX << endl;
    cout << "USHRT_MAX : " << USHRT_MAX << endl;
    cout << "INT_MIN   : " << INT_MIN << endl;
    cout << "INT_MAX   : " << INT_MAX << endl;
    cout << "UINT_MAX  : " << UINT_MAX << endl;
    cout << "LONG_MIN  : " << LONG_MIN << endl;
    cout << "LONG_MAX  : " << LONG_MAX << endl;
    cout << "ULONG_MAX : " << ULONG_MAX << endl;
    cout << "LLONG_MIN : " << LLONG_MIN << endl;
    cout << "LLONG_MAX : " << LLONG_MAX << endl;
    cout << "ULLONG_MAX: " << ULLONG_MAX << endl;
    cout << endl;

    // long int = long
    long int lValue = 2344387438947239847;
    cout << lValue << endl;

    // short int = short
    short int sValue = 23434;
    cout << sValue << endl;
    cout << endl;

    // sizeof() can show how many bytes are allocated to type
    cout << "Size of int  : " << sizeof(int) << "byte" << endl;
    cout << "Size of short: " << sizeof(short int) << "byte" << endl;

    // unsigned can only store positive value
    unsigned int uValue = 234234;

    return 0;
}