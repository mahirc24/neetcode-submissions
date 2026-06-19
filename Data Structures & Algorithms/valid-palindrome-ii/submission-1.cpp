class Solution {
    bool isPalindrome(string s){
        string str = s;
        reverse(s.begin(),s.end());
        if(str==s) return true;
        else return false;
    }
public:
    bool validPalindrome(string s) {
        if(isPalindrome(s)==true) return true;
        else{
            for(int i=0;i<s.size();i++){
                string str = s;
                str.erase(i,1);
                if(isPalindrome(str)==true)return true;
            }
        }
        return false;
    }

};