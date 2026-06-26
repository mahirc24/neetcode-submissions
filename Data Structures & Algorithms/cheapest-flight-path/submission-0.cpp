class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        //{stops,{node,dist}}
        vector<int>dist(n,1e9);
        dist[src]=0;
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        while(!q.empty()){
            auto it = q.front();
            int stops = it.first;
            int node = it.second.first;
            int dis = it.second.second;
            q.pop();
            if(stops>k) continue;
            for(auto iter: adj[node]){
                int adjnode = iter.first;
                int edW = iter.second;
                if(dis+edW<dist[adjnode] && stops<=k){
                    dist[adjnode] = dis+edW;
                    q.push({stops+1,{adjnode,dist[adjnode]}});
                }
            }

        }
        if(dist[dst]==1e9) return -1;
        else return dist[dst];

    }
};