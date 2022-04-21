#include<iostream>
using namespace std;



// in XOR operation, if two bits are same then result become 0,
// if the bits are different then result become 1.
// example: 
// a:   0 0 1 0 1 0 1
// b:   1 0 1 0 1 1 0
// ----------------------
// res: 1 0 0 0 0 1 1


int main() {
    int a = 12;
    int b = 12;
    int c = 13;
    int d = 14;

    cout << (a ^ b) << endl;
    cout << (a ^ c) << endl;
    cout << (a ^ d) << endl;

}
