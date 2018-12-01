// Name : ConstructorsAndDestructors.cpp

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    cout << "Starting program ..." << endl;

    {
        Cat bob;
        bob.speak();
    }
    // Desctructor "Cat::~Cat()" will be called
    // because the object will not be used anymore

    cout << "Ending program ..." << endl;
    return 0;
}