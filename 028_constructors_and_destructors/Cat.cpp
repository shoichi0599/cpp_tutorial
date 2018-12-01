// Name : Cat.cpp

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
    cout << "Cat created." << endl;
    Cat::happy = true;
}

Cat::~Cat() {
    cout << "Cat destroyed." << endl;
}

void Cat::speak() {
    if (Cat::happy) {
        cout << "Meouw!" << endl;
    } else {
        cout << "Sssss!" << endl;
    }
}