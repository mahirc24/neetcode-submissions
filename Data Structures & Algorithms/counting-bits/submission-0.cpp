class Solution {
public:
    vector<int> countBits(int n) {
    vector<int>v;
    for(int i=0;i<n+1;i++){
        int cnt = 0;
        for(int j=0;j<31;j++){
            if(i & 1<<j) cnt++;
        }
        v.push_back(cnt);
     }
     return v;
    }
};
