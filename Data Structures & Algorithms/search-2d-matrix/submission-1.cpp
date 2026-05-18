class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size(); 
        int l = 0;
        int r = m-1;
        int res1=0;
        while(l<=r){
        int mid=l+(r-l)/2;
        if(matrix[mid][n-1]==target)return true;
        else if(target>=matrix[mid][0]&&target<=matrix[mid][n-1]) {res1=mid;
        break;}
        else if(matrix[mid][n-1]<target) l = mid+1;
        else if(matrix[mid][n-1]>target) r=mid-1;
        }
        int l1=0;
        int r1=n-1;
        while(l1<=r1){
        int mid=l1+(r1-l1)/2;
        if(matrix[res1][mid]==target)return true;
        else if(matrix[res1][mid]<target) l1 = mid+1;
        else if(matrix[res1][mid]>target) r1 = mid-1;
        }
return false;

    }
};
