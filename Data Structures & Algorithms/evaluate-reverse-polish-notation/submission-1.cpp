class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else{
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if(tokens[i]=="+"){
                    int z = x+y;
                    st.push(z);
                }
                else if(tokens[i]=="-"){
                    int z = y-x;
                    st.push(z);
                }
                else if(tokens[i]=="*"){
                    int z = x*y;
                    st.push(z);
                }
                else if(tokens[i]=="/"){
                    int z = y/x;
                    st.push(z);
                }
                
            }
        }  
        return st.top(); 
    }
};
