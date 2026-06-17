class Solution {
private:
    void dfs(int node, vector<vector<int>>& adj,vector<int>& vis){
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                dfs(it,adj,vis);
            }
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }


        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                cnt++;
            }
        }
     return cnt;

    }
};
