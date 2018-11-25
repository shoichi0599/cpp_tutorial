// Name : GettersAndSetters.cpp

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

    Person person;
    cout << person.toString() << endl;

    // Setter
    person.setName("Georgina");
    // Getter
    cout << "Name of person with get method: " << person.getName() << endl;

    return 0;
}