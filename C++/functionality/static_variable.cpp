// https://www.geeksforgeeks.org/static-variables-in-c/

/* Static variable in C++, have life time scope, so it always retain position, not destroyed by any function call or wipe out the
  stack section of the memory*/


#include<iostream>
using namespace std;

static int a = 20;

void increament(){
        ++a;
}

int main(){
        cout << a << endl;
        increament();
        cout << a << endl;
        increament();
        cout << a << endl;
        increament();
        cout << a << endl;
        increament();
        cout << a << endl;
        increament();
}


/* Output:
20
21
22
23
24
*/
 
