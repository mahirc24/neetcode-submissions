class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
         for(const auto &s : strs){
            vector<int> count(26,0);
            for(char c : s){
                count[c-'a']++;
            }
            string x = to_string(count[0]);
            for(int i = 1; i<count.size(); i++){
                x=x+','+ to_string(count[i]);
            }
            m[x].push_back(s);
         }
         vector<vector<string>>v;
         for(auto &w : m  ){
            v.push_back(w.second);
         }
         return v;
    }
    
};
