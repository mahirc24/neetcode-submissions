class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it : hash){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        vector<int>l;
        int n =v.size();
        for(int i = n-1; i>=n-k; i--){
          l.push_back(v[i].second);
        }
        return l;
    }
};
