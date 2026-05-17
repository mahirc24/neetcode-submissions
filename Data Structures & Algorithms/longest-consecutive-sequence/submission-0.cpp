class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>s(nums.begin(),nums.end());
    int res = 0;
  
    for(int num : nums){
    if(s.find(num-1)!=s.end()) continue;
      int streak=0;
    while(s.find(num)!=s.end()){
        streak++;
        num++;
    }
    res=max(res,streak);
    }
    return res;

    }
};
