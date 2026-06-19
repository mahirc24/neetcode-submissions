class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        int n = nums.size();
        int k = 1<<n;
        for(int i=0;i<k;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                if(i & 1<<j){
                    v.push_back(nums[j]);
                }
            }
            res.push_back(v);
        }
        return res;
    }


};
