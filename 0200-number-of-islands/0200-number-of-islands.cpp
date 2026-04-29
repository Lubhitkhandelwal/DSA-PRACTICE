class Solution {
public:
    bool isValid(int i, int j, int m, int n){
        if(i<0 || i>=m) return false;
        if(j<0 || j>=n) return false;

        return true;
    }

    void markVis(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j, int m, int n){
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j] = 1;

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int i = it.first;
            for(int j=it.second-1;j<=it.second+1;j++){
                if(isValid(i,j,m,n) && grid[i][j] == '1' && !vis[i][j]){
                    vis[i][j] = 1;
                    q.push({i,j});
                }
            }

            int j = it.second;
            for(int i=it.first-1;i<=it.first+1;i++){
                if(isValid(i,j,m,n) && grid[i][j] == '1' && !vis[i][j]){
                    vis[i][j] = 1;
                    q.push({i,j});
                }
            }
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m,vector<int>(n,0));
        int cnt = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    markVis(grid,vis,i,j,m,n);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};