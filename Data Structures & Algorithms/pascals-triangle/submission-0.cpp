class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++){
            vector<int>w(i+1,0);
        for(int j=0;j<w.size();j++){
            w[j]=c(i,j);
           }
           v.push_back(w);
        }
        return v;
    }
    long long c(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
       res=res*(n-i)/(i+1);
    }
    return res;
   }
   
   };