// The previous one was pass by reference we have to swap back to get the original array back
// In this below example we pass by value, so we don't have to swap back to get the original array back

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& nums) {
        for(auto i : nums) {
                cout << i << " ";
        }
        cout << "\n";
}

void permutation(vector<int> nums, int idx) {
        if(idx == nums.size() - 1) {
                print(nums);
                return;
        }
        for(int i = idx; i < nums.size(); i++) {
                swap(nums[idx], nums[i]);
                permutation(nums, idx + 1);
                // swap(nums[idx], nums[i]);
        }
}


int main() {
        vector<int> nums = {1, 2, 3};
        permutation(nums, 0);
}
