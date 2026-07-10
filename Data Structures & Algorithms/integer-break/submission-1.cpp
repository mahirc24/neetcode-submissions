class Solution {
    int solve(int n,vector<int>&dp){
        int best = 0;
        if(dp[n]!=-1)return dp[n];
        for(int i=1;i<n;i++){
            best = max(best,i*max(n-i,solve(n-i,dp)));
        }
        return dp[n] = best;
    }
public:
    int integerBreak(int n) {
        vector<int>dp(10000,-1);
        return solve(n,dp);
    }
};