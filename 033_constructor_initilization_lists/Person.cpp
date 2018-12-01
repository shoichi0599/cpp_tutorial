// Name : Person.cpp

#include <sstream>
#include "Person.h"

// Meve to header file 'Person.h'
// Person::Person(): name("unnamed"), age(0) {
// }

// Meve to header file 'Person.h'
// Person::Person(string name, int age): name(name), age(age) {
// }

string Person::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << Person::name;
    ss << "; Age:";
    ss << Person::age;
    return ss.str();
}