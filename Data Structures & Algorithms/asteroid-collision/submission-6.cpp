class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        for(int i=0;i<ast.size();i++){
            if(ast[i]>=0){
                st.push(ast[i]);
            }
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(ast[i])){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(ast[i])){
                    st.pop();
                    continue;
                    
                }
                if(st.empty() || st.top()<0){
                    st.push(ast[i]);
                }
            }
        }  
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }   
        reverse(v.begin(),v.end());
        return v;  
    }
};