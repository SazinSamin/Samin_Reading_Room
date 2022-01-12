#include<iostream>
using namespace std;
#define MAX 10000
int memo[MAX];

void fib(int n) {
    memo[0] = 0;
    memo[1] = 1;
    for(int i=2; i <= n; i++) {
        memo[i] = memo[i-1] + memo[i-2];
    }
    cout << memo[n] << endl;
}


int main() {
    fib(7);
}
