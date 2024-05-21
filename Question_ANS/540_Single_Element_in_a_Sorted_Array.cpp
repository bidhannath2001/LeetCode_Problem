class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {


        //problem scenario
        /* index = (even,odd),(even,odd), target, (odd,even),(odd,even)
            EX = 1,1,2,3,3
        if the mid position is odd then we have to check the previous value is equal to nums[mid] or not or if mid 
        position is even then we have to check whether the next value is equal to nums[mid]. If yes we can consiser 
        that we are in left side of the target otherwise we are on right side...
        if no condition is matched then have to return -1.*/


        int n = nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int low = 1;
        int high = n-2;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

            //we are in left
            if(mid%2==1 && nums[mid]==nums[mid-1] || mid%2==0 && nums[mid]==nums[mid+1]){
                low = mid+1;
            }
            //we re on right
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
