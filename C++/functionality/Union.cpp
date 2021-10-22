// https://www.youtube.com/watch?v=6uqU9Y578n4&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=67
// https://stackoverflow.com/questions/2310483/purpose-of-unions-in-c-and-c



#include<iostream>
using namespace std;


// union used for type punning or aliasing. The largest data member of the union is hold the only memory location.
// rest of the other member used that same location, this actullay for used for holding the same memory with
// different types.
union Complex{
        int x;
        char y;
        float z;
};

int main(){
        // creating instance of Union
        Complex c1;
        // the last modified type is valid to access and result correctly.
        c1.z = 65.12;

        // accessing the memory using other type if position last modified by another type, will leads to undefined behaviour.

        cout << c1.x << " " << c1.y << " " << c1.z << endl;
}
