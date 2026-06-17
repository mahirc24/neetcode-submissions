class Solution {
private:
    void dfs(int row, int col, vector<vector<char>>& board, vector<vector<int>>& vis){
        int m = board.size();
        int n = board[0].size();
        vis[row][col] = 1;
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && board[nrow][ncol]=='O'){
                vis[nrow][ncol]=1;
                dfs(nrow,ncol,board,vis);
            }
        }
    } 

public:
    void solve(vector<vector<char>>& board) {
    int m = board.size();
    int n = board[0].size();
    vector<vector<int>>vis(m,vector<int>(n,0));
    for(int i=0;i<n;i++){
        if(board[0][i]=='O'){
            dfs(0,i,board,vis);
        }
        if(board[m-1][i]=='O'){
            dfs(m-1,i,board,vis);
        }

    }
    for(int i=0;i<m;i++){
        if(board[i][0]=='O'){
            dfs(i,0,board,vis);
        }
        if(board[i][n-1]=='O'){
            dfs(i,n-1,board,vis);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]=='O' && !vis[i][j]) board[i][j]='X';
        }
    }
    return;
}
};