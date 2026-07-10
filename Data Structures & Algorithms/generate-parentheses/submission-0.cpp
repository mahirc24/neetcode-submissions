class Solution {
private:
    void backtrack(vector<string>&res,int open, int close, int n, string curr){
        if(curr.size()==2*n){
            res.push_back(curr);
            return;
        }
        if(open<n){
            backtrack(res,open+1,close,n,curr+'(');
        }
        if(close<open){
            backtrack(res,open,close+1,n,curr+')');
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        backtrack(res,0,0,n,"");
        return res;
    }
};