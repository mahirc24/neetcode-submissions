class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int cnt = 0;
        while(l<=r){
            while(l>=0 && r<=n-1 && l!=r && people[l]+people[r]>limit){
                cnt++;
                r--;
            }
            cnt++;
            l++;
            r--;
        }
        return cnt;
    }
};