// Name : Person.cpp

#include "Person.h"

Person::Person() {
    Person::name = "George";
}

string Person::toString() {
    return "Person's name is: " + name;
}

void Person::setName(string newName) {
    Person::name = newName;
}

string Person::getName() {
    return name;
}