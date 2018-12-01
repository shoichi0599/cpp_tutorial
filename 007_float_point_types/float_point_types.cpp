// Name : float_point_types.cpp

#include <iostream>
// iomanip (input output manipulation)
// @see: http://www.cplusplus.com/reference/iomanip/
#include <iomanip>

using namespace std;

int main() {

    float fValue = 76.4;
    cout << "sizeof(float)                 : " << sizeof(float) << " byte" << endl;
    cout << "fValue                        : " << fValue << endl;
    cout << "fValue with 'fixed'           : " << fixed << fValue << endl;
    cout << "fValue with 'scientific'      : " << scientific << fValue << endl;
    // 'setprecision()' is included in 'iomanip
    cout << "fValue with 'setprecision(20) : " << setprecision(20) << fixed << fValue << endl;
    cout << endl;

    double dValue = 123.456789;
    cout << "sizeof(double)                : " << sizeof(double) << " byte" << endl;
    cout << "dValue                        : " << dValue << endl;
    cout << "dValue with 'fixed'           : " << fixed << dValue << endl;
    cout << "dValue with 'scientific'      : " << scientific << dValue << endl;
    cout << "dValue with 'setprecision(20) : " << setprecision(20) << fixed << dValue << endl;
    cout << endl;

    long double lValue = 123.4567891234567890;
    cout << "sizeof(long double)           : " << sizeof(long double) << " byte" << endl;
    cout << "lValue                        : " << dValue << endl;
    cout << "lValue with 'fixed'           : " << fixed << lValue << endl;
    cout << "lValue with 'scientific'      : " << scientific << lValue << endl;
    cout << "lValue with 'setprecision(20) : " << setprecision(20) << fixed << lValue << endl;

    return 0;
}