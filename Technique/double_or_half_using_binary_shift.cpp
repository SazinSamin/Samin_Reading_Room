// Qoura -> https://qr.ae/pr1HpS

#include<iostream>
using namespace std;

int main() {
    int x = 100;                // 1100100 (binary)  = 100 (decimal)
    // doubling the number
    int y = x << 1;             // 11001000 (binary) = 200 (decimal)
    // half the number  
    int z = x >> 1;             // 110010 (binary)   = 50 (decimal)
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}
