class Solution {
public:
    int rob(vector<int>& nums) {
    vector<int>v1;
    vector<int>v2;
    if(nums.size()==1) return nums[0]; 
    for(int i=0;i<nums.size()-1;i++){
        v1.push_back(nums[i]);
    }
    for(int i=1;i<nums.size();i++){
        v2.push_back(nums[i]);
    }
    return max(rob1(v1),rob1(v2));
    }
    int rob1(vector<int>&nums){
    int n = nums.size();
    vector<int>dp(n+1,0);
    if(n==0) return 0;
    if(n==1) return nums[0];
    int prev = nums[0];
    int prev2=0;
    int curi;
    for(int i=1;i<n;i++){
    int take = nums[i];
    if(i>=2) take+=prev2;
    int nottake =0+prev;
    curi = max(take,nottake);
    prev2=prev;
    prev=curi;
    }
    return prev;
    }
};
