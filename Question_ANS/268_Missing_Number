/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array. 
Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique. */


//ans
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //brute force soln

        /*int n = nums.size();
        for(int i=0;i<=n;i++){
            int flag = 0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag =1;
                    break;
                }
            }
            if(!flag){
                return i;
            }
        }
        return -1;*/


        // better soln (using hashing concept)

        /*int n = nums.size();
        vector<int>hash_ara(n+1,0);
        for(int i=0;i<n;i++){
            hash_ara[nums[i]]=1;
        }
        //searching which block contains zero in hash_ara
        for(int i=0;i<=n;i++){
            if(hash_ara[i]==0){
                return i;
            }
        }
        return -1; */


        //optimal soln

        /*
        int n = nums.size();
        long long sum = (n*(n+1))/2;

        for(int i=0;i<n;i++){
            sum=sum-nums[i];
        }
        return sum;*/

        int  n = nums.size();
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            xor1 = xor1^nums[i];
            xor2 = xor2^(i+1);
        }
        return xor2^xor1;
    }
};
