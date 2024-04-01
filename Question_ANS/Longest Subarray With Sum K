Problem statement
You are given an array 'a' of size 'n' and an integer 'k'.

Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]

Here, the length of the longest subarray is 3, which is our final answer.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
7 3
1 2 3 1 1 1 1

Sample Output 1 :
3
Explanation Of Sample Input 1 :
Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.

Sample Input 2 :
4 2
1 2 1 3
Sample Output 2 :
1
Sample Input 3 :
5 2
2 2 4 1 2 

Sample Output 3 :
1
Expected time complexity :
The expected time complexity is O(n).
Constraints :
1 <= 'n' <= 5 * 10 ^ 6
1 <= 'k' <= 10^18
0 <= 'a[i]' <= 10 ^ 9

Time Limit: 1-second

//ans

#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {

    //two pointer approach

    int left = 0,right =0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=a[right];
        }
    }
    return maxLen;


    //using hashing

    // map<long long,int>presumMap;
    // long long sum=0;
    // int maxLen = 0;
    // for(int i=0;i<a.size();i++){
    //     sum+=a[i];
    //     if(sum==k){
    //         maxLen = max(maxLen,i+1);
    //     }
    //     long long rem = sum-k;
    //     if(presumMap.find(rem)!=presumMap.end()){
    //         int len = i - presumMap[rem];
    //         maxLen = max(maxLen,len);
    //     }
    //     if(presumMap.find(sum)==presumMap.end()){
    //         presumMap[sum] = i;
    //     }
    // }
    // return maxLen;
}
