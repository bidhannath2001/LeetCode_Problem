//Dutch National Flag problem /  sort and arry of 0s,1s,2s

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.


//ans
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0,mid=0,high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};

//TC = O(N);
//SC = 0(1);

Sort an array of 0s, 1s, and 2s using the Pointer Approach: 
This approach is based on the following idea:
The problem is similar to “Segregate 0s and 1s in an array”.
The problem was posed with three colors, here `0′, `1′ and `2′. The array is divided into four sections: 
arr[0] to arr[low – 1]
arr[low] to arr[mid – 1]
arr[mid] to arr[high – 1]
arr[high] to arr[n-1]
If the ith element is 0 then swap the element to the low range.
Similarly, if the element is 1 then keep it as it is.
If the element is 2 then swap it with an element in high range.
