class Solution {
private:
    void dfs(int row, int col,vector<vector<int>>&grid,vector<vector<int>>&vis, int &cnt){
        vis[row][col]=1;
        int m = grid.size();
        int n = grid[0].size();
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        for(int i=0;i<4;i++){
            int newr = row+delrow[i];
            int newc = col+delcol[i];
                if(newr<0||newr>=m||newc<0||newc>=n){
                    cnt++;
                }
                else if(grid[newr][newc]==0){
                    cnt++;
                }
                else if(!vis[newr][newc] && grid[newr][newc]==1){
                    dfs(newr,newc,grid,vis,cnt);
                }
             
                
            }
        }
    
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    dfs(i,j,grid,vis,cnt);
                }
            }
        }
        return cnt;
    }
};