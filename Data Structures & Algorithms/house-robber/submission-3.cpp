class Solution {
public:
    int rob(vector<int>& nums) {
    int n = nums.size()-1;
    if(n==0)return nums[0];
    if(n==1)return max(nums[1],nums[0]);
    if(n==2)return max(nums[0]+nums[2],nums[1]);
    vector<int>dp(n+1);
    dp[n-1]=nums[n-1];
    dp[n-2]=nums[n-2]+nums[n];
    dp[n]=nums[n];
    for(int i=n;i>=3;i--){
        dp[i-3]=nums[i-3]+max(dp[i-1],dp[i]);
        
    }
    return max(dp[0],dp[1]);
    }
};
