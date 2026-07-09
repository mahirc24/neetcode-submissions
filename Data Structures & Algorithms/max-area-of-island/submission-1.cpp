class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>&grid,vector<vector<int>>&vis,int &maxi){
        vis[row][col]=1;
        int m = grid.size();
        int n = grid[0].size();
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        for(int i=0;i<4;i++){
            int newr = row+delrow[i];
            int newc = col+delcol[i];
            if(newr>=0 && newr<m && newc>=0 && newc<n && !vis[newr][newc] && grid[newr][newc]==1){
                maxi++;
                dfs(newr,newc,grid,vis,maxi);
            }
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int maxi = 1;
                if(!vis[i][j] && grid[i][j]==1){
                    dfs(i,j,grid,vis,maxi);
                    cnt = max(cnt,maxi);
                }
                
            }
        }
        return cnt;
    }
};
