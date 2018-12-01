// Name : StringStreams.cpp

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string name = "Bob";
    int age = 32;
    // CAUTION: '+ age;' will cause compile error
    // string info = "Name: " + name + "; age: " + age;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    // this will work fine
    
    ss << age;

    cout << ss.str() << endl;

    return 0;
}