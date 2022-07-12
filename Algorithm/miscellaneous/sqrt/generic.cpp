#include<iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    double n = 0;
    while(n * n <= a) {
        n += 0.01;
    }

    cout << n << endl;
}
