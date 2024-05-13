Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104





class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        //Kadane's algorithm

        int sum  = 0;
        int maxSum = INT_MIN;
        for(auto it : nums){
            sum+=it;
            maxSum = max(sum,maxSum); 
            if(sum<0) sum = 0;
        }
        return maxSum;
    }
};

 /*Pseudocode of Kadane’s algorithm:
        Initialize:
            max_so_far = INT_MIN
            max_ending_here = 0

        Loop for each element of the array

        (a) max_ending_here = max_ending_here + a[i]
        (b) if(max_so_far < max_ending_here)
                    max_so_far = max_ending_here
        (c) if(max_ending_here < 0)
                    max_ending_here = 0
        return max_so_far*/
