class Solution {
public:

    void markVis(int node, vector<int>& vis, vector<vector<int>>& adjL){
        queue<int> q;
        q.push(node);
        vis[node] = 1;

        while(!q.empty()){
            int temp = q.front();
            q.pop();

            for(auto &it:adjL[temp]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>> adjL(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjL[i].push_back(j);
                    adjL[j].push_back(i);
                }
            }
        }  

        int cnt = 0;
        vector<int> vis(V,0);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                markVis(i,vis,adjL);
                cnt++;
            }
        }
        return cnt;
    }
};