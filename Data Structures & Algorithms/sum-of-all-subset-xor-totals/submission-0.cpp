class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int orr = 0;
    for(int i=0;i<n;i++){
        orr = orr | nums[i];
    }
    return orr* 1<<(n-1);
    }
};