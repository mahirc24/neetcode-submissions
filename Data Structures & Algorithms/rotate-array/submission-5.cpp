class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    vector<int>res;
    if(nums.size()==1) return;
    k = k%nums.size();
    k = nums.size()-k;
    k = k%nums.size();
    while(res.size()!=nums.size()){
        res.push_back(nums[k]);
        k=(k+1)%nums.size();
    } 
    nums = res;
    return;
    }
};