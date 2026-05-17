class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int p=1;
      int q=1;
      int zerocnt=0;
      vector<int>v;
      for(int i=0;i<nums.size();i++){
         if(nums[i]!=0){p=p*nums[i];
         }
         else zerocnt++;

      }
      if(zerocnt>1){return vector<int>(nums.size(),0);}
      else if(zerocnt==0){
         for(int num:nums){
            v.push_back(p/num);
         }
         return v;
      }
      else{
         for(int num:nums){
         if(num==0) v.push_back(p);
         else v.push_back(0);
         }
         return v;
      }
    }
};
