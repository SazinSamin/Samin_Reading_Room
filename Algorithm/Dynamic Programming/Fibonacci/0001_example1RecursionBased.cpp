#include<iostream>
using namespace std;
#define MAX 10000
int memo[MAX];

void initMemo() {
        for(int i=0; i< MAX; i++) memo[i] = -1;
}

int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        if(memo[n] != -1) {
                return memo[n];
        }

        memo[n] = fib(n - 1) + fib(n - 2);
        return memo[n];
}


int main() {
        initMemo();
        cout << fib(15);
}
