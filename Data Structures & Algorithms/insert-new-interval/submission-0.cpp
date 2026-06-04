class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newint) {
    int n = intervals.size();
    int i = 0;
    vector<vector<int>>res;
    while(i <= n-1 && intervals[i][1]<newint[0]){
        res.push_back(intervals[i]);
        i++;
    } 
    while(i <= n-1 && newint[1] >= intervals[i][0]){
        newint[0] = min(intervals[i][0],newint[0]);
        newint[1] = max(newint[1],intervals[i][1]);
        i++;
    }
    res.push_back(newint);

    while(i <= n-1){
        res.push_back(intervals[i]);
        i++;
    }
    return res;
    }
};
