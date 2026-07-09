class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
       
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int newr = row+delrow[i];
                int newc = col+delcol[i];
                if(newr>=0 && newr<m && newc>=0 && newc<n && grid[newr][newc]==INT_MAX){
                   
                    grid[newr][newc]= grid[row][col]+1;
                    q.push({newr,newc});
                }
            }
        }
    }
};
