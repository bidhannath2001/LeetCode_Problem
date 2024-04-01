/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 
Constraints:
1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/


class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //brute force
        int n = nums.size();

        // for(int i=0;i<n;i++){
        //     int cnt= 0;
        //     int temp = nums[i];
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==temp){
        //             cnt++;
        //         }
        //     }
        //     if(cnt==1) return temp;
        // }
        // return 0;

        //hashing

        // int mx=0;
        // for(int i=0;i<n;i++){
        //     mx = max(mx,nums[i]);
        // }
        // vector<int>hashing_arr(mx+1,0);
        // for(int i=0;i<n;i++){
        //     hashing_arr[nums[i]]++;
        // }
        // for(int i=1;i<=n;i++){
        //     if(hashing_arr[i]==1) return i;
        // }
        // return 0;


        //using map


        // map<long long, int>mp;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second ==1){
        //         return it.first;
        //     }
        // }
        // return 0;

        //using xor concept
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};
