#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_end = 0, max_sum = INT_MIN;
        
        // we can also get the subarray starting & ending value, 
        //  comment out commnet statement and get the result.
        // int start = 0, stop = 0;

        for(int i=0; i<nums.size(); i++) {

            max_end = max_end + nums[i];

            if(max_end < nums[i]) {
                max_end = nums[i];
                // start = nums[i];
            }

            if(max_sum < max_end) { 
                max_sum = max_end;
                // stop = nums[i];
            }
        }
        // cout << start << " " << stop << endl;
        return max_sum;
    }

};

int main() {
    vector<int> v = {};
    Solution s = Solution();
    cout << s.maxSubArray(v) << endl;
}
