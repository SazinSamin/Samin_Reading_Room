#include<bits/stdc++.h>
using namespace std;


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
        sort(nums.begin(), nums.end());
        permutation(nums, 0);
        for(auto i : result) {
                for(auto j : i) {
                        cout << j << " ";
                } cout << endl;
        }
}
