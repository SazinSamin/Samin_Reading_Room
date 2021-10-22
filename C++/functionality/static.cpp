// I have found that static variable initialized once and retain it's position
// in debugging mode i see that that line "static int i = 10" never get executed
// so, may be the static variable initialized in compile time once.
// whether we use this in function or global, the line "static int i = 10" never get touched in runtime.


#include<iostream>
using namespace std;

void test(){
        static int i = 10;
        if(i == 20){
                return;
        }
        cout << i++ << endl;
        test();
}


int main(){
        test();
}

// output : 10 11 12 13 14 15 16 17 18 19
