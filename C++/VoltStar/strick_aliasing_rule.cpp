// https://stackoverflow.com/questions/44137442/what-is-type-punning-and-what-is-the-purpose-of-it



// strict aliasing rule & type punning have relation, so see also the type punning

// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/C%2B%2B/functionality/Type_Punning.cpp
// https://stackoverflow.com/questions/98650/what-is-the-strict-aliasing-rule
// https://www.geeksforgeeks.org/strict-aliasing-rule-in-c-with-examples/




#include<iostream>
using namespace std;

int main(){
        // strict aliasing rule means the two different types of pointer can't pointing to a same 
        // memory location. It's possible to point a memory location with different types of pointers, but this 
        // violate the strict aliasing rule.

        int num = 10;
        int* ptrInt = &num;
        double* ptrDouble = (double*)&num;
        float* ptrFloat = (float*)ptrDouble;


        cout << "We can read that memory with different pointer types" << endl;
        cout << "ptrInt:  " << *ptrInt << endl;
        cout << "ptrDouble: " << *ptrDouble << endl;
        cout << "ptrFloat: " << *ptrFloat << endl;



        cout << "\n\nThey are pointing to same memory location: " << endl;
        cout << "ptrInt:  " << ptrInt << endl;
        cout << "ptrDouble: " << ptrDouble << endl;
        cout << "ptrFloat: " << ptrFloat << endl;
}
