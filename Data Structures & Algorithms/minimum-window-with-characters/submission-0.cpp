class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>hash(256,0);
        int minlen=1e9;
        int sidx=-1;
        int l=0;
        int r=0;
        int m=s.size();
        int n=t.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            hash[t[i]]++;
        }
        while(r<m){
            if(hash[s[r]]>0){
                cnt=cnt+1;
            }    
            hash[s[r]]--;
            while(cnt==n){
                if(r-l+1<minlen){
                    minlen = r-l+1;
                    sidx=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) cnt=cnt-1;
                l++;
            }
            r++;
        }
        return sidx == -1 ? "" : s.substr(sidx,minlen);
    }
};