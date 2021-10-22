// https://www.geeksforgeeks.org/type-conversion-in-c/

#include<iostream>
using namespace std;

int main(){

        // Implicit conversion
        int a = 10;
        double b = a;
        cout << b << endl;

        // Explicit conversion
        int c = 20;
        float d = float(c);
        cout << d << endl;
}
