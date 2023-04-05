// if an element contain only one duplicate, then only this algorithm works
// like example array [1, 2, 2] it work, not for [1, 2, 2, 2]


#include<bits/stdc++.h>
using namespace std;

vector<int> res;

void print(vector<int> nums) {
        for(auto i : nums) {
                cout << i << " ";
        }
        cout << "\n";
}


vector<vector<int>> result;

void permutation(vector<int> nums, int idx) {
        if(idx == nums.size() - 1) {
                result.push_back(nums);
                return;
        }
        for(int i = idx; i < nums.size(); i++) {
                if(idx != i && nums[idx] == nums[i]) continue;
                swap(nums[idx], nums[i]);
                permutation(nums, idx + 1);
        }
}


int main() {
        vector<int> nums = {3, 3, 0, 3};
        permutation(nums, 0);
        for(auto i : result) {
                for(auto j : i) {
                        cout << j << " ";
                } cout << endl;
        }
}
