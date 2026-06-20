class Solution {
public:
    int candy(vector<int>& ratings) {
    vector<int> left;
    vector<int> right;
    int k = 1;
    int t = 1;
    left.push_back(k);
    right.push_back(t);
    int n =ratings.size();
    for(int i=1;i<n;i++){
        if(ratings[i]>ratings[i-1]) left.push_back(++k);
        else {
            k = 1;
            left.push_back(k);
            }
    }
    for(int i=n-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]) right.push_back(++t);
        else {
            t = 1;
            right.push_back(t);
            }
    }
    reverse(right.begin(),right.end()); int sum=0;
    for(int i=0;i<n;i++){
        sum+= max(left[i],right[i]);
    }
    return sum;
    }
};