Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109


//ans
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //usning hashing
        // map<int,int>cnt;
        // int n = nums.size();
        // int check = n/2;
        // for(int i=0;i<n;i++){
        //     cnt[nums[i]]++;
        // }
        // for(auto it:cnt){
        //     if(it.second>check) return it.first;
        // }
        // return -1;
        // TC - O(nlogn) SC - O(n)


        //using moore's voting algrithm
        int n = nums.size();
        int check = n/2;
        int cnt= 0;
        int el;
        for(int i=0;i<n;i++){
            if(cnt==0){
                el = nums[i];
                cnt=1;
            }
            else if(nums[i]==el){
                cnt++;
            }
            else cnt--;
        }
        int cnt1 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==el) cnt1++;
            if(cnt1>check) return el;
        }
        return -1;
       // TC - O(n) SC - O(1)
    }
};
