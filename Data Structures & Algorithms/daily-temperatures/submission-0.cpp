class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<pair<int,int>>st;
        vector<int>res;
        res.push_back(0);
        st.push({temp[n-1],n-1});
        for(int i=n-2;i>=0;i--){
            if(temp[i]<st.top().first){
                res.push_back(abs(st.top().second-i));
                st.push({temp[i],i});
            }          
            else if(!st.empty() && temp[i]>=st.top().first){
                while(!st.empty() && temp[i]>=st.top().first){
                    auto x = st.top();
                    st.pop();
                }
                if(st.empty()){
                    res.push_back(0);
                }
                if(!st.empty()){
                    res.push_back(abs(st.top().second-i));
                }
                st.push({temp[i],i});
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};