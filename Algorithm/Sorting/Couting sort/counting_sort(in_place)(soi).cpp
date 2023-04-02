// https://github.com/SazinSamin/Problem-Solving/blob/main/LeetCode/75.%20Sort%20Colors/Solution2(countingsort_modified_in_place).cpp
// this solution is based on leetcode 75 sort color problem


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int max_element = 3;
        vector<int> count(max_element, 0);
        // couting the number of occurances of each element
        for(int i = 0; i < nums.size(); i++) {
                count[nums[i]]++;
        }
        int i = 0, j = 0;
        // now put the count ascending to the array, i variable for array element(0, 1, 2)
        // j variable for keep the counting of the given array indexes(0...nums.size())
        // reduce the element count(count[i]--) after puting it into the array
        while(i < max_element) {
                if(count[i] > 0) {
                        nums[j++] = i;
                        count[i]--;
                } else {
                        i++;
                } 
        }
    }
};
