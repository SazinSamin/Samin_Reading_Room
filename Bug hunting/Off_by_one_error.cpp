// https://en.wikipedia.org/wiki/Off-by-one_error

#include<iostream>
using namespace std;

int main() {
  
    int array[5] = {1, 2, 3, 4, 5};
    int len = sizeof(array) / sizeof(array[0]);

    // look the loop run from 0 to 4,
    // 0, 1, 2, 3, 4 iterate total five times, start from 0, stop before 5,
    // but if we do i <= len, then it will iterate 6 times, 
    // or if we start from 0, then skip the first index, because in most programming language, array is 0th based index.
    // both of the case leads to Off-by-one-error.
  
    for(int i = 0; i < len; i++) {
        cout << array[i] << " ";
    }
}
