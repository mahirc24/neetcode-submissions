class Solution {
public:
    int jump(vector<int>& nums) {
    if(nums.size()==1)return 0;
    int l=0,jump=1,r=nums[0];
    int maxi=0;
    int n = nums.size();
    while(r<n-1){
        for(int i=l;i<=r;i++){
        maxi=max(maxi,i+nums[i]);
        }
        l = r+1;
        r = maxi;
        jump++;
     }
     return jump;
    }
};
