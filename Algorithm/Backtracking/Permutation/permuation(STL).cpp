#include<bits/stdc++.h>
using namespace std;

void print(vector<int> nums) {
    for(auto i : nums) {
        cout << i << " ";
    } cout << endl;
}

int main() {
    vector<int> nums = {3, 3, 0, 3}; 
    // read below to know why sort is necessary
    sort(nums.begin(), nums.end());
    do {
        print(nums);
    } while(next_permutation(nums.begin(), nums.end()));
}

    // here the sorting is nessary for the get the every possible permutation. 
    // because if any element in array is greater than it next element, then the next permuation think array already have 
    // some permuation, so it start from there.
    // like permuation of {0, 3, 3, 3} are
    // 0 3 3 3
    // 3 0 3 3 
    // 3 3 0 3 
    // 3 3 3 0
    // so if we give a array of {3, 3, 0, 3}, so next_permuation() consider first 2 permuation have already done, so start 
    // from the 3rd one & give the last 2 results. 
