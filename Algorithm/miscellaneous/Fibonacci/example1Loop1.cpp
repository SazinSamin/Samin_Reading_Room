#include<iostream>
using namespace std;

void fib(int n) {
    int first = 0, second = 1, sum;
    while(n--) {
        sum = first + second;
        second = first;
        first = sum;
        cout << sum << endl;
    }
}


int main() {
    fib(15);
}
