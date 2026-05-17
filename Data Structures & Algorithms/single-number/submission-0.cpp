class Solution {
public:
    int singleNumber(vector<int>& nums) {
    unordered_map<int,int>hash;
    for(int num : nums){
       hash[num]++;
      }
    for(auto it:hash){
      if(it.second==1)return it.first;
    }
    }
};
