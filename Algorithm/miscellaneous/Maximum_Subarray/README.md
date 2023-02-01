# Maximum subarray  
[Wiki](https://en.wikipedia.org/wiki/Maximum_subarray_problem#:~:text=The%20maximum%20subarray%20problem%20was,dimensional%20array%20of%20real%20numbers.)
[GeeksforGeeks](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)  
Some properties of this problem are:  
- If the array contains all non-negative numbers, then the problem is trivial; a maximum subarray is the entire array.  
- If the array contains all non-positive numbers, then a solution is any subarray of size 1 containing the maximal value of the array (or the empty subarray, if it is permitted).  
- Several different sub-arrays may have the same maximum sum.  
**********************  
Problem can be solved using kadane's algorithm, divide & Conqure   
Problem solved leetcode [code](https://github.com/SazinSamin/Problem-Solving/tree/main/LeetCode/53.%20Maximum%20Subarray)  
