

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int path = 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1) obstacleGrid[i][j] = -1;
            }
        }
        if(obstacleGrid[0][0] ==-1) return 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0) && obstacleGrid[i][j] == -1) break;
                else if(j==0 && i!=0 && obstacleGrid[i-1][j] == -1) obstacleGrid[i][j] = -1;
                else if((i==0 || j==0) && obstacleGrid[i][j] !=-1) obstacleGrid[i][j] = 1;
                else if(obstacleGrid[i][j] !=-1){
                    obstacleGrid[i][j] = (obstacleGrid[i-1][j]==-1? 0: obstacleGrid[i-1][j]) + (obstacleGrid[i][j-1] == -1 ? 0 : obstacleGrid[i][j-1]);
                }
            }
        }
        return obstacleGrid[m-1][n-1] == -1 ? 0 : obstacleGrid[m-1][n-1];
    }
};
