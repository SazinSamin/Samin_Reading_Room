// https://www.geeksforgeeks.org/check-integer-overflow-multiplication/

#include<iostream>
using namespace std;

bool isOverflow(int a, int b){

        long long result = a * b;
        if(a != result / b){
                return -1;
        }
        return 0;
}

int main(){

        int a = 2147483640;
        int b = 2147483640;
        cout << isOverflow(a, b);
}
