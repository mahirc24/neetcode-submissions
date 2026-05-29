class Solution {
public:
    bool canPartition(vector<int>& nums) {
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    if(sum%2) return false;
    else return canP(nums,sum/2); 
 }
    bool canP(vector<int>&nums,int k){
    int n = nums.size();
    vector<vector<bool>>dp(n,vector<bool>(k+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=true;
    }
    if(nums[0]<=k) dp[0][nums[0]]=true;
    for(int i=1; i<n; i++){
        for(int target=1 ; target <= k; target++ ){
         
            bool notpick = dp[i-1][target];
            bool pick = false;
            if(target>=nums[i]) pick = dp[i-1][target-nums[i]];
          dp[i][target] = pick || notpick;
        }
     }
    return dp[n-1][k];
     
    }
};
