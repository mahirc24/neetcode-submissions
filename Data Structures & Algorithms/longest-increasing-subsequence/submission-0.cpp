class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    return f(0,-1,nums,dp);
    }

    int f(int i, int j, vector<int>& nums,vector<vector<int>>&dp){
    int n = nums.size();
    if(i>n-1) return 0;
    if(dp[i][j+1]!=-1)return dp[i][j+1];
    int notpick = f(i+1,j,nums,dp);
    int pick = 0;
    if(j==-1 || nums[i]>nums[j] ){
        pick = 1 + f(i+1,i,nums,dp);
    }
    else pick = 0;
    return dp[i][j+1] = max(pick,notpick);
   }
};
