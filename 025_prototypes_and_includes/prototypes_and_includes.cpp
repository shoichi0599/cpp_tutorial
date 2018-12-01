// Name : prototypes_and_includes.cpp

#include <iostream> // <> => standard location
#include "utils.h" // "" => where the file

using namespace std;

// This is called prototype
void doSomething();

int main() {

    doSomething();
    doSomething();

    return 0;
}

void doSomething() {
    cout << "Hello" << endl;
}