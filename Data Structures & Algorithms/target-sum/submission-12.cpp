class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;int k;
        for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        }
        k = (sum-target)/2; 
        if((sum-target)%2)return 0;
        if(sum<target) return 0;
        return subsetsum(nums,k);

    }



    int subsetsum(vector<int>&nums, int &k){

        
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,0));

        if(nums[0]<=k)dp[0][nums[0]]+=1;
        dp[0][0]+=1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<=k;j++){
            int nottake = dp[i-1][j];
            int take = 0;
            if(j>=nums[i]){
                take = dp[i-1][j-nums[i]];
            }
            dp[i][j]= take + nottake;
            }
        }
        return dp[n-1][k];

    }
};
