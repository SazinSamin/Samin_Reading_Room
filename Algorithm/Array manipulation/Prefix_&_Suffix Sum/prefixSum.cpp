#include<iostream>
using namespace std;

int main() {
        int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int prefixSum [10];

        // prefix Sum
        prefixSum[0] = arr[0];
        for(int i = 1; i < 10; i++) {
                prefixSum[i] = prefixSum[i-1] + arr[i];
        }

        for(int i =0 ; i < 10; i++) {
                cout << prefixSum[i] << " ";
        }
}
