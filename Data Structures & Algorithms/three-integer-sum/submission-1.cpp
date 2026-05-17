class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<nums.size();i++){
            set<int> hashset;
            for(int j=i+1;j<nums.size();j++){
                 int target= -(nums[i]+nums[j]);
                 if(hashset.find(target)!=hashset.end()){
                  st.insert({nums[i],target,nums[j]});
                  
                 }
                 hashset.insert(nums[j]);
                   }

        }
        return vector<vector<int>> (st.begin(),st.end());
    }
};
