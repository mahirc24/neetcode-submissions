class Solution {
public:
    string longestPalindrome(string s) {
        string s1;
        string s2;
        s1 = s; reverse(s.begin(),s.end()); s2 = s;
        string x = lcsubstring(s1,s2);
        return x;
    
    }
    string lcsubstring(string &s1,string &s2){
        int m = s1.size();
        int n = s2.size();
        int maxidx = 0;
        int res=0;

        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<=m;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=n;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=m;i++){
             for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    int org_strt_idx = i-dp[i][j];
                    int rev_strt_idx = n-j;
                if(org_strt_idx==rev_strt_idx){
                    if(dp[i][j]>res){
                        res=dp[i][j];
                        maxidx = i;
                    }
                }

                
                }
                else dp[i][j]=0;
                
             }
         
         }
         return s1.substr(maxidx-res,res);

     
        }

    };
