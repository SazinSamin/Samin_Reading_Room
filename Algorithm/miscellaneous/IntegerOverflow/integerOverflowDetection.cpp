// https://www.geeksforgeeks.org/check-for-integer-overflow/

#include<iostream>
using namespace std;


// this algorithm is not perfect for detecting integer overflow, 
// it detect only when signed integer turrned into negetive but if signed integer again turn into positive
// after rounding it's negetive portion, it's failed to detect the overflow.

int isOverFlow(int* result, int a, int b){

        if(a > 0 && b > 0 && *result < 0){
                return -1;
        }else if(a < 0 && b < 0 && *result > 0){
                return -1;
        }
        return 0;
}


int main(){
        int x = 2147483640;
        int y = 2147483642;
        int* result = (int*) malloc(sizeof(int));
        *result = x * y;
        cout << isOverFlow(result, x, y) << endl;
        cout << *result << endl;
}
