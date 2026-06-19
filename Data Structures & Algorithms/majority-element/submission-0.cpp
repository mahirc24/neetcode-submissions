class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int>hash;
    for(int i=0;i<nums.size();i++){
        hash[nums[i]]++;
    }
    int maxi=0;
    for(auto it: hash){
        maxi=max(maxi,it.second);
    }
    int x=0;
    for(auto it: hash){
        if(it.second==maxi){
            x = it.first;
        }
    }
    return x;
    }
};