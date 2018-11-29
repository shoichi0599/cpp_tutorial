// Name : Person.cpp

#include <sstream>
#include "Person.h"

Person::Person() {
    Person::name = "undefined";
    Person::age = 0;
}

Person::Person(string newName) {
    Person::name = newName;
    Person::age = 0;    
}

Person::Person(string newName, int newAge) {
    Person::name = newName;
    Person::age = newAge;
}

string Person::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << Person::name;
    ss << "; Age:";
    ss << Person::age;
    return ss.str();
}