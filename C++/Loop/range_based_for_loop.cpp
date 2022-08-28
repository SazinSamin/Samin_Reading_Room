// https://www.geeksforgeeks.org/range-based-loop-c/

#include<iostream>
using namespace std;

int main() {
        int nums[] = {1, 2, 3, 4, 5};
        for(int num: nums) {
                cout << num << endl;
        }
}
