// Name : multidimensional_arrays.cpp

#include <iostream>
using namespace std;

int main() {
    
    string animals[2][3] = {
        { // animals[0]
            "fox", // animals[0][0]
            "dog", // animals[0][1]
            "cat"  // animals[0][2]
        }, 
        { // animals[1]
            "mouse",    // animals[1][0]
            "squirrel", // animals[1][1]
            "parrat"    // animals[1][2]
        } 
    };

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }    

    return 0;
}