#include<iostream>
using namespace std;

int main() {
        int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int length = sizeof(arr) / sizeof(arr[0]);
        int suffixSum [10];

        // suffix Sum
        suffixSum[length - 1] = arr[length - 1];
        for(int i = length - 2; i >= 0; i--) {
                suffixSum[i] = suffixSum[i +1] + arr[i];
        }

        for(int i =0 ; i < 10; i++) {
                cout << suffixSum[i] << " ";
        }
}
