/*There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.
A province is a group of directly or indirectly connected cities and no other cities outside of the group.
You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.
Return the total number of provinces.*/


class Solution {
private:
    void dfs(int node, vector<int>& vis, vector<vector<int>>& adjList){
        vis[node] = 1;
        for(auto it : adjList[node]){
            if(!vis[it]){
                dfs(it, vis, adjList);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        // Change from adjacency matrix to adjacency list
        int n = isConnected.size();
        vector<vector<int>> adjList(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<int> vis(n, 0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i, vis, adjList);
            }
        }
        return cnt;
    }
};
