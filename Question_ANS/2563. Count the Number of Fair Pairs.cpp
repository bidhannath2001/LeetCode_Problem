/*
Given a 0-indexed integer array nums of size n and two integers lower and upper, return the number of fair pairs.
A pair (i, j) is fair if:
0 <= i < j < n, and
lower <= nums[i] + nums[j] <= upper
Example 1:
Input: nums = [0,1,7,4,4,5], lower = 3, upper = 6
Output: 6
Explanation: There are 6 fair pairs: (0,3), (0,4), (0,5), (1,3), (1,4), and (1,5).
Example 2:
Input: nums = [1,7,9,2,5], lower = 11, upper = 11
Output: 1
Explanation: There is a single fair pair: (2,3).
Constraints:
1 <= nums.length <= 105
nums.length == n
-109 <= nums[i] <= 109
-109 <= lower <= upper <= 109
*/

#define ll long long
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        ll n = nums.size();
        sort(nums.begin(),nums.end());
        ll cnt = 0;
        
        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n-1;

            //lower bound
            while(l<=r){
                ll mid = l+(r-l)/2;
                if(nums[i]+nums[mid] >= lower) r = mid-1;
                else l = mid+1;
            }
            ll l_bound = l;
            l=i+1;
            r = n-1;
            
            // upper bound
            while(l<=r){
                ll mid = l+(r-l)/2;
                if(nums[i]+nums[mid] <= upper) l = mid+1;
                else r = mid-1;
            }
            ll r_bound = r;
            cnt+=(r_bound-l_bound+1);
        }
        return cnt;
    }
};
