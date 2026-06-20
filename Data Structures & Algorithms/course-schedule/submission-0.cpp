class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prereq) {
        vector<vector<int>>adj(numCourses);

        for(int i=0;i<prereq.size();i++){
            adj[prereq[i][1]].push_back(prereq[i][0]);
        }
        vector<int>indegree(numCourses,0);

        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>top;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            top.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
              }
        }
        if(top.size()==numCourses)return true;
        else return false;
    }
};