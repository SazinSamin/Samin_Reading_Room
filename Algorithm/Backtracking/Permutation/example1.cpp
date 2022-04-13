// https://www.techiedelight.com/find-permutations-given-string/

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
    // 
    if(i == n - 1) {
         printVector(arr);
         return; 
    }


    // process each character of remaining string
    for(int j = i; j < n; j++) {
        // swap other character with current character
        swap(arr[i], arr[j]);
        // go for next character
        permutation(arr, i+1, n);
        // swap back to get the original string back
        swap(arr[i], arr[j]);
    }
}


int main() {
    vector<int> arr = {1, 2, 3};
    permutation(arr, 0, 3);
}
