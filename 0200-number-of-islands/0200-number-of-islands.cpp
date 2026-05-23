class Solution {
public:
    bool isValid(int i,int j,int m,int n){
        return(i>=0 && i<m && j>=0 && j<n);
    }

    void bfs(vector<vector<int>>& vis, vector<vector<char>>& grid, int row, int col){
        queue<pair<int,int>> q;
        int m = grid.size();
        int n = grid[0].size();
        
        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};

        q.push({row,col});
        vis[row][col] = 1;

        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();

            for(int k=0;k<4;k++){
                int nx = x + dx[k];
                int ny = y + dy[k];
                if(isValid(nx,ny,m,n) && grid[nx][ny] == '1' && !vis[nx][ny]){
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m,vector<int> (n,0));
        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    ans++; 
                    bfs(vis,grid,i,j);
                }
            }
        }
        return ans;
    }
};