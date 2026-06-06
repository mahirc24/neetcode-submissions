class Solution {
public:
    bool checkValidString(string s) {
    int n = s.size();
    int min = 0;
    int max = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            min++;
            max++;
        }
        else if(s[i]==')'){
            min--;
            if(min==-1) min++;
            max--;
            if(max==-1) return false;
            
        }
        else {
            min--;
            if(min==-1)min++;
            max++;
        }

    }  

    return (min==0);
    }
};
