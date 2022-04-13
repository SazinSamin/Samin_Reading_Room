#include<iostream>
#include<vector>
using namespace std;



void printVector(vector<int> arr) {
    for(auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}



void permutation(vector<int> arr, int i, int n) {
    if(i == n - 1) {
         printVector(arr);
         return; 
    }


    for(int j = i; j < n; j++) {
        swap(arr[i], arr[j]);
        permutation(arr, i+1, n);
        swap(arr[i], arr[j]);
    }
}


int main() {
    vector<int> arr = {1, 2, 3};
    permutation(arr, 0, 3);
}
