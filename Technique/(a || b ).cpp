#include<iostream>
using namespace std;

int main () {
    int a = true;
    int b = false;

    int c = (a || b);
    cout << c << endl;
    
    int d = (a && b);
    cout << d << endl;

    int e = (a && c);
    cout << e << endl;
}
