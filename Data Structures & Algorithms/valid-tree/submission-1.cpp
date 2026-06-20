class Solution {
private:
    bool dfs(int node, int parent, vector<vector<int>>&adj,vector<int>&vis){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,node,adj,vis)) return true;
            }
            else if(it!=parent) return true;
        }
        return false;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n,0);
        bool x = true;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
            cnt++;
            if(dfs(i,-1,adj,vis)==true) x = false;
            }
        }
        if(cnt==1 && x==true) return true;
        else return false;
    }
};
 