class Solution {
public: 
    vector<vector<int>>ans;
    vector<int>path;
    void dfs(int index, int target, vector<int>&nums){
        if(target==0){
            ans.push_back(path);
            return;
        }
        if(target<0 || index > nums.size()-1){
            return;
        }
        path.push_back(nums[index]);
        dfs(index,target-nums[index],nums);
        path.pop_back();
        dfs(index+1,target,nums);
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        dfs(0,target,nums);
        return ans;
    }
};
