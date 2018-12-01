// Name : Person.cpp

#include <sstream>
#include "Person.h"

Person::Person() {
    Person::name = "";
    Person::age = 0;
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;

    cout << "Memory location of object: " << this << endl;
}

string Person::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << Person::name;
    ss << "; Age:";
    ss << Person::age;
    return ss.str();
}