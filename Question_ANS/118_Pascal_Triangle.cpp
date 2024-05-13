Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

//ans
class Solution {
public:
    //printing a single element
    // int ncr(int n,int r){
    //     long long res = 1;
    //     for(int i=0;i<r;i++){
    //         res = res*(n-i);
    //         res = res/(i+1);
    //     }
    //     return res;
    // }
    //printing a single row
    vector<int>generateRow(int n){
        long long ans=1;
        vector<int>row;
        row.push_back(ans);
        for(int i=1;i<n;i++){
            ans = ans * (n-i);
            ans = ans / i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
