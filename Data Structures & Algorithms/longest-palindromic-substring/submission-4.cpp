class Solution {
public:
    string longestPalindrome(string s) {
    int res_idx = 0;
    int res_len = 0;
    for(int i=0;i<s.size();i++){
        int l=i;int r=i;
        while(l>=0 && r<=s.size()-1 && s[l]==s[r] ){
            if(r-l+1>res_len){
                res_idx = l;
                res_len = r-l+1;
            }
           l--;
           r++; 
        }
    }
    for(int i=0;i<s.size();i++){
        int l=i;int r=i+1;
        while(l>=0 && r<=s.size()-1 && s[l]==s[r] ){
             if(r-l+1>res_len){
                res_idx = l;
                res_len = r-l+1;
             }
           l--;
           r++; 
        }
    }


    return s.substr(res_idx,res_len);
    }

};
