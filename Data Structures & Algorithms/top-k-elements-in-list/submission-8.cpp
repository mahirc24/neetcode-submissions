class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        vector<vector<int>> freq(nums.size()+1);
        for(auto num :nums){
            hash[num]++;
        }
          for(auto it: hash){
            freq[it.second].push_back(it.first);
          }
           vector<int>res;
           for(int i = freq.size()-1;i>0;--i){
                for(int n : freq[i]){
                    res.push_back(n);
                    if(res.size()==k) return res;
            }
           }

        
    }
};
