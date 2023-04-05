// https://www.youtube.com/watch?v=28okqq8raXM
// permuation for all element in array is unique


#include<bits/stdc++.h>
using namespace std;

vector<int> res;

void print(vector<int>& nums) {
        for(auto i : nums) {
                cout << i << " ";
        }
        cout << "\n";
}

void permutation(vector<int>& nums, int idx) {
        if(idx == nums.size() - 1) {
                print(nums);
                return;
        }
        for(int i = idx; i < nums.size(); i++) {
                swap(nums[idx], nums[i]);
                permutation(nums, idx + 1);
                swap(nums[idx], nums[i]);
        }
}


int main() {
        vector<int> nums = {1, 2, 3, 4};
        permutation(nums, 0);
}
