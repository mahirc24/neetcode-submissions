class Solution {
public:
    int maxProfit(vector<int>& prices) {
    vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
    return f(0,1,prices,dp);
    }
    int f(int i,int buy,vector<int>& prices,vector<vector<int>>&dp){
        int n = prices.size();
        if(i>n-1) return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy){
         return dp[i][buy]=max(-prices[i]+f(i+1,0,prices,dp),f(i+1,1,prices,dp));
        }
        else{
         return dp[i][buy]=max(prices[i]+f(i+1,1,prices,dp),f(i+1,0,prices,dp));
        }
    }
};
