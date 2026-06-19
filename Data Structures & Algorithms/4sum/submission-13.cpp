#define ll long long
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      sort(nums.begin(),nums.end());
      vector<vector<int>>v;
      if(nums.size()<4){
        return {};
      }
      int n = nums.size();

      for(ll i=0;i<n-3;i++){
      if(i>=1 && nums[i]==nums[i-1]) continue;
      ll j = i+1;
      while(j<=n-3){
        if(j>i+1 && nums[j]==nums[j-1]){
            j++;
            continue;
        }
            ll k = j+1;
            ll l = n-1;
        while(k<l){
            ll sum = (ll)nums[i]+(ll)nums[j]+(ll)nums[k]+(ll)nums[l];
            if(sum>target){
                l--;
            }
            else if(sum<target){
                k++;
            }
            else{
                v.push_back({nums[i],nums[j],nums[k],nums[l]});
                k++;
                l--;
                while(k<l && nums[k]==nums[k-1])k++;
                while(k<l && nums[l]==nums[l+1])l--;
            }

        }
        j++;

      }

    }
    

    return v;
    }
};