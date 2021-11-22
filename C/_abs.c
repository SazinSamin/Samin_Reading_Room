#include<iostream>
using namespace std;

// we have to use long data type instead of int because integer just can hold up to
// 2^32 which may leads to error if we tried to make a integer variable absolute.

long _abs(long a){
        if(a < 0){
                return -a;
        }
        return a;
}

int main(){
        int x;
        cin >> x;
        cout << _abs(x) << endl;
}
