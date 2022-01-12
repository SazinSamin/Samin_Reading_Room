// https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution
{
public:
        int maxSubArray(vector<int> &nums) {
                int max = INT_MIN;
                int sum = 0;
                int size = nums.size();
                for(int i=0; i<size; i++) {
                        sum = sum + nums[i];
                        if(sum > max) {
                                max = sum;
                        }
                        if(sum < 0) {
                                sum = 0;
                        }
                }
                return max;
        }
};
int main() {
        vector<int> v = {-2, -3, -4, -2, -1, -3};
        Solution s = Solution();
        cout << s.maxSubArray(v) << endl;
}
