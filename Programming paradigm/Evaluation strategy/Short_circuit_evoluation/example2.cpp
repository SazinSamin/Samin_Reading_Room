#include<iostream>
using namespace std;

// If you put denominator 0, it won't crash the application bcz short circuit evoluation find out the
// denominator 0 and division will be avoided
int main () {
    int nn = 6, dn = 0;
    dn && cout << nn / dn;
}
