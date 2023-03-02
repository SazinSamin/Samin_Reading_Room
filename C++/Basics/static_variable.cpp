// https://www.geeksforgeeks.org/static-variables-in-c/
// static variable also initialized 0 by compiler if not explicitly initialized by programmer.


/* Static variable in C++, have life time scope, so it always retain position, not destroyed by any function call or wipe out the
  stack section of the memory*/


// I have found that static variable initialized once and retain it's position
// in debugging mode i see that that line "static int b = 0" never get executed
// so, may be the static variable initialized in compile time once.
// whether we use this in function or global, the line "static int b = 0" never get touched in runtime.



#include<iostream>
using namespace std;

// Global static variable, which visible to all over the file.
static int a = 0;

void incrementGlobal(){
        ++a;
}

int incrementLocal(){
        // Local static variable, which visible to only this function.
        static int b = 0;
        return ++b;
}

int main(){
        cout << "Local static a: " << a << endl;
        incrementGlobal();
        cout << "Local static a: " << a << endl;
        incrementGlobal();
        cout << "Local static a: " << a << endl;
        
        cout << "Global static b: " << incrementLocal() << endl;
        cout << "Global static b: " << incrementLocal() << endl;
        cout << "Global static b: " << incrementLocal() << endl;
}
/* Output:
Local static a: 0
Local static a: 1
Local static a: 2
Global static b: 1
Global static b: 2
Global static b: 3
*/
 
