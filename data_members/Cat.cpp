// Name : Cat.cpp

#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {
    if (Cat::happy) {
        cout << "Meouw!" << endl;
    } else {
        cout << "Sssss!" << endl;
    }
}

void Cat::makeHappy() {
    Cat::happy = true;
}

void Cat::makeSad() {
    Cat::happy = false;
}