class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         set<vector<int>>result;
         int t=nums.size();
         sort(nums.begin(),nums.end());
         for(int i=0;i<t;i++){
            for(int j=i+1;j<t;j++){
                for(int k=j+1;k<t;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                    result.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }

            
         }
return vector<vector<int>> (result.begin(),result.end());
        }
        };
    
    
