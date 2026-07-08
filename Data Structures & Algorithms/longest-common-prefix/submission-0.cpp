class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mini=1e9;
        int l=0;
        int r=1;
        while(r!=n){
            int cnt = 0;
            for(int i=0;i<min(strs[l].size(),strs[r].size());i++){
                if(strs[l][i]==strs[r][i]){
                    cnt++;
                    continue;
                }
                else{
                    break;
                }
            }
            mini=min(mini,cnt);
            l++;
            r++;
        }
        return strs[0].substr(0,mini);
    }
};