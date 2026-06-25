class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,
        pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[0][0]=0;
        vector<int>delrow = {0,-1,0,1};
        vector<int>delcol = {1,0,-1,0};
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            if(row == n-1 && col == m-1) return dist[row][col];
            for(int i=0;i<4;i++){
                int newr = row+delrow[i];
                int newc = col+delcol[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m){
                    int maxD = max(abs(heights[newr][newc]-heights[row][col]),dis);
                    if(maxD<dist[newr][newc]){dist[newr][newc]=maxD;
                    pq.push({dist[newr][newc],{newr,newc}});}
                } 
            }

        }
        return 0;
    }
};