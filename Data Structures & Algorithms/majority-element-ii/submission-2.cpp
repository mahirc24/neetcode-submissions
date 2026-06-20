class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int x = n/3;
    unordered_map<int,int>hash;
    for(auto num:nums){
        hash[num]++;
    }
    vector<int>v;
    for(auto it:hash){
        if(it.second>x){
            v.push_back(it.first);
        }
    }
    return v;
    }
};