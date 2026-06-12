class Solution {
private: 
    void bfs(int row, int col, vector<vector<char>> &grid, vector<vector<int>> &vis){
        int m = grid.size();
        int n = grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int delr=-1;delr<=1;delr++){
                for(int delc=-1;delc<=1;delc++){
                    if (delr==-1 && delc==0 || delr==1 && delc == 0 || 
                    delr==0 && delc==1 || delr==0 && delc == -1){
                    int newr = r+delr;
                    int newc = c+delc;
                    if(newr>=0 && newr<m && newc>=0 && newc<n && grid[newr][newc]=='1' && !vis[newr][newc]){
                        q.push({newr,newc});
                        vis[newr][newc]=1;
                       }
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int cnt = 0;
    vector<vector<int>>vis(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                cnt++;
                bfs(i,j,grid,vis); 
            }
        }
    }
    return cnt;
    }

}; 