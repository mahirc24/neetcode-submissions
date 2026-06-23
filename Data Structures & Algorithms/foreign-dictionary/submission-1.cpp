class Solution {
private:
    vector<int> toposort(vector<vector<int>>&adj){
        int n = adj.size();
        vector<int>indeg(n,0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indeg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indeg[it]--;
                if(indeg[it]==0) q.push(it);
            }
        }
        return topo;
    }
public:
    string foreignDictionary(vector<string>& words) {
        int n = words.size();
        set<char>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                st.insert(words[i][j]);
            }
        }
        int k = st.size();
        vector<vector<int>>adj(26);
        for(int i=0;i<n-1;i++){
            int len = min(words[i].size(),words[i+1].size());
            for(int j=0;j<len;j++){
                if(words[i].size()>words[i+1].size()){
                    if(words[i].substr(0,words[i+1].size())==words[i+1]){
                        return "";
                    }
                }
                if(words[i][j]!=words[i+1][j]){
                adj[words[i][j]-'a'].push_back(words[i+1][j]-'a');
                break;
                }
            }
        }
        vector<int>res;
        res = toposort(adj);
        string str="";
        vector<bool>present(26,false);
        for(int i=0;i<words.size();i++){
            for(char c: words[i]){
                present[c-'a'] = true;
            }
        }
        int cnt = 0;
        for(int i=0;i<res.size();i++){
            if(present[res[i]]==true){
               str+=char(res[i]+'a');
               cnt++;
            }
        }
        if(cnt!=k) return "";
       return str;
    }
};
