class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>res;
    int m = matrix.size();
    int n = matrix[0].size();
    int top = 0; int right = n-1;
    int left = 0; int bottom = m-1;
    while(left<=right && top<=bottom){
         for(int i=left;i<=right;i++){
            res.push_back(matrix[top][i]);
         }
         top++;
         if(res.size()==m*n) break;
         for(int i=top;i<=bottom;i++){
            res.push_back(matrix[i][right]);
         }
         right--;
         if(res.size()==m*n) break;
         for(int i=right;i>=left;i--){
            res.push_back(matrix[bottom][i]);
         }
         bottom--;
         if(res.size()==m*n) break;
         for(int i=bottom;i>=top;i--){
            res.push_back(matrix[i][left]);
         }
         left++;
         if(res.size()==m*n) break;

        }
        return res;
   }

};
