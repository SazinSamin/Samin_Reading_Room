#include<iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 1;
    // check the 2nd least significant bit of x is 1 or 0
    (x && 1 << 1) ? cout << "true" : cout << "false";
    cout << endl;
    y = y << 1;
    cout << "\n" << y << endl;
}
