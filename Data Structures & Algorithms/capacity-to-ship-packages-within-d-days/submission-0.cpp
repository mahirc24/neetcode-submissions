class Solution {
private:
    int findDays(vector<int>& weights, int cap){
        int days = 1;
        int temp = 0;
        for(int i=0;i<weights.size();i++){
            if(temp+weights[i]>cap){
                temp = weights[i];
                days = days+1;
            }
            else{
                temp = temp+weights[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            int day = findDays(weights,mid);
            if(day<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};