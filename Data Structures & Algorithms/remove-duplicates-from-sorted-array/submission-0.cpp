class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            res.push_back(nums[i]);
        }
        res.push_back(nums[n-1]);
        nums = res;
        int k=0;
        k=res.size();
        return k;
    }
};