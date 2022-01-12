#include<iostream>
using namespace std;
#define MAX 1000
int Memo[MAX];

void initMemo() {
        for(int i=0; i< MAX; i++) Memo[i] = -1;
}

int factorial(int n) {
        if(n == 1) return 1;
        if(n == 0) return 1;

        if(Memo[n] != -1) {
                return Memo[n];
        }

        Memo[n] = n * factorial(n - 1);
        return Memo[n];
}




int main() {    
        initMemo();
        cout << factorial(5) << endl;
}
