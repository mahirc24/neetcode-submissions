class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<double>time;
        int n = position.size();
        vector<pair<int,int>>v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<position.size();i++){
            time.push_back((double)(target-v[i].first)/v[i].second);
        }
        stack<double>st;
        st.push(time[n-1]);
        for(int i=n-2;i>=0;i--){
            if(time[i]<=st.top() ){
                continue;
            }
            if(time[i]>st.top()){
                st.push(time[i]);
            }
        }
        return st.size();
    }
};
