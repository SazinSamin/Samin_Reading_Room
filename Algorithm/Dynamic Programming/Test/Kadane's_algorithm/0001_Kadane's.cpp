// https://www.youtube.com/watch?v=YxuK6A3SvTs&t=3s
// https://en.wikipedia.org/wiki/Maximum_subarray_problem

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_end = 0, max_sum = INT_MIN;

        for(int i=0; i<nums.size(); i++) {

            max_end = max_end + nums[i];

            if(max_end < nums[i]) {
                max_end = nums[i];
            }

            if(max_sum < max_end) { 
                max_sum = max_end;
            }
        }
        return max_sum;
    }

};

int main() {
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution s = Solution();
    cout << s.maxSubArray(v) << endl;
}
