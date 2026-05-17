class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string>s;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
        char val=board[i][j];
        if(val!='.'){
            if(!s.insert(string("r")+to_string(i)+to_string(val)).second||
               !s.insert(string("c")+to_string(j)+to_string(val)).second||
               !s.insert(string("b")+to_string(i/3)+to_string(j/3)+to_string(val)).second)
               return false;
        }
         
        }

     }
     return true;
    }
};
