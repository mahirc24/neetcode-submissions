class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int res=INT_MIN,curMax=1,curMin=1;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int cM=curMax;
        
              curMax=max({nums[i],curMax*nums[i],curMin*nums[i]});
              curMin=min({nums[i],cM*nums[i],curMin*nums[i]});
          
        res=max(res,curMax);
    }
    return res;
    }
};
