// https://www.geeksforgeeks.org/const-keyword-in-cpp/

#include<iostream>
using namespace std;

int main(){
        // const variable means it value can't be changed, 
        // also have intialize at decleartion time.
        const int a = 10;
        int b = 12;

        
        // pointer pointing to a constant value;
        const int*ptr1 = &b;
        // *ptr = 13; we can't do it now.


        // pointer pointing to a constant location
        int* const ptr2 = &b;
        // ptr2 = &a; we can't do it now.

        // pointer pointing to a const value & location
        cost int* const ptr3 = &b;
        // ptr3 = &a;           We can't do any of two now.
        // *ptr3 = 15;




        cout << *ptr << endl;
}
