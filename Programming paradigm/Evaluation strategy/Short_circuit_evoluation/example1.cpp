#include<iostream>
using namespace std;

// as x is already evaluated true so the increment operation won't get executed
// and the x value remain 1;
int main () {
    int x = 1;
    if(x || ++x) {
        cout << x;  // output 1
    }
}
