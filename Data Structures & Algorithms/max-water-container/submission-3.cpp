class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int maxA=0;
        while(l<r){
        int a=(r-l)*min(heights[l],heights[r]);
        maxA=max(maxA,a);
        if(heights[l]<heights[r])l++;
        else r--;
       }
       return maxA;
    }
};
